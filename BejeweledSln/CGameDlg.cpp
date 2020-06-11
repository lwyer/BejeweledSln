#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QDebug>
#include <iostream>
#include "ui_CMenuDlg.h"

CGameDlg::CGameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg)
{
    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);

    clickjewel = new QSound("../BejeweledSln/sound/clickjewel.wav");
    xiaoqu = new QSound("../BejeweledSln/sound/xiaoqu.wav");
    perfect = new QMediaPlayer;
    perfect->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/perfect.wav"));
    perfect->setVolume(70);
    timeup = new QMediaPlayer;
    timeup->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/timeup.wav"));
    timeup->setVolume(100);
    goodbye = new QMediaPlayer;
    goodbye->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/goodbye.wav"));
    goodbye->setVolume(100);

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/lightning.mp3"));
    player->setVolume(configIni->value("Music/volume").toInt());
    player->play();
    if(configIni->value("Switch/BgMusic").toString() == "0")
        player->setVolume(0);
    if(configIni->value("Switch/Sound").toString() == "0")
    {
        clickjewel = new QSound("../BejeweledSln/sound/wu.wav");
        xiaoqu = new QSound("../BejeweledSln/sound/wu.wav");
        perfect->setVolume(0);
        timeup->setVolume(0);
        goodbye->setVolume(0);
    }

    style = configIni->value("Picture/Style").toString();
    ui->setupUi(this);
    ui->background->setPixmap(QPixmap(configIni->value("Picture/BgPic").toString()));
    ui->background->setScaledContents(true);
    ui->scoreshow->setText("0");
    ui->menu->setFocusPolicy(Qt::NoFocus);

    gamelogic = new CGameLogic(6);
    gamelogic->init(matrix);
    std::string path;
    int x[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    int y[8] = {20, 70, 120, 170, 220, 270, 320, 370};

    delete configIni;

    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            jewel[i][j] = new Mylabel(i, j, x[j], y[i], path, this);
            if(style == "1"){
                switch(matrix[i][j])
                {
                case 1: path = "../BejeweledSln/image/blue.png";break;
                case 2: path = "../BejeweledSln/image/green.png";break;
                case 3: path = "../BejeweledSln/image/lightblue.png";break;
                case 4: path = "../BejeweledSln/image/orange.png";break;
                case 5: path = "../BejeweledSln/image/purple.png";break;
                case 6: path = "../BejeweledSln/image/red.png";break;
                case 7: path = "../BejeweledSln/image/yellow.png";break;
                case 8: path = "../BejeweledSln/image/white.png";break;
                }
            }else
            {
                switch(matrix[i][j])
                {
                case 1: path = "../BejeweledSln/image/blue2.png";break;
                case 2: path = "../BejeweledSln/image/green2.png";break;
                case 3: path = "../BejeweledSln/image/deepgreen2.png";break;
                case 4: path = "../BejeweledSln/image/orange2.png";break;
                case 5: path = "../BejeweledSln/image/purple2.png";break;
                case 6: path = "../BejeweledSln/image/red2.png";break;
                case 7: path = "../BejeweledSln/image/yellow2.png";break;
                case 8: path = "../BejeweledSln/image/sliver2.png";break;
                }
            }
            QPixmap pix(path.c_str());
            jewel[i][j]->setPixmap(pix);
            jewel[i][j]->path = path;
            jewel[i][j]->setScaledContents(true);
            jewel[i][j]->setGeometry(x[j], y[i], 50, 50);
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }

    ui->pause->hide();
    ui->timeout->hide();
    ui->allcannot->hide();
    isPause = false;
    clickflag = 0;
    kuang = new QLabel(this);
    kuang->hide();
    score = 0;
    boomcount = 0;
    ui->boomcount->setText(QString::number(boomcount));

    ui->progressBar->setRange(0, 60);
    ui->progressBar->setValue(60);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateProgress()));
    timer->start();
}


void CGameDlg::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_B && !isPause)
    {
       ui->pause->show();
       ui->pause->raise();
       isPause = true;
       timer->stop();
       ui->pauseorcontinue->setText("开始");
       return;
    }else if(ev->key() == Qt::Key_B && isPause)
    {
        ui->pause->hide();
        isPause = false;
        timer->start();
        ui->pauseorcontinue->setText("暂停");
        return;
    }

    QWidget::keyPressEvent(ev);
}

void CGameDlg::keyReleaseEvent(QKeyEvent *ev)
{
    QWidget::keyReleaseEvent(ev);
}

void CGameDlg::closeEvent(QCloseEvent *event)
{
    goodbye->play();
    this->hide();
    sleep(1500);
    event->accept();
}


CGameDlg::~CGameDlg()
{
 //   delete ui;
}

void CGameDlg::menu()
{
    CMenuDlg* w = new CMenuDlg(this);
    isPause=false;
    pauseorcontinue();
    connect(w->ui->backtohome, SIGNAL(clicked()), this, SLOT(backtohome()));
    w->show();
    w->exec();
}

void CGameDlg::backtohome()
{
    this->close();
    player->stop();
    CBejeweledDlg w;
    w.show();
    w.exec();
}


void CGameDlg::pauseorcontinue()
{
    if(isPause)
    {
        ui->pause->hide();
        isPause = false;
        timer->start();
        ui->pauseorcontinue->setText("暂停");
    }else
    {
        ui->pause->show();
        ui->pause->raise();
        isPause = true;
        timer->stop();
        ui->pauseorcontinue->setText("开始");
    }
}

void CGameDlg::boom()
{
    int xiaoqucount = 0;
    if(boomcount > 0)
    {
        boomcount--;
        ui->boomcount->setText(QString::number(boomcount));
        gamelogic->boom(matrix);
        do{
            xiaoqu->play();
            drawJewel();
            sleep(700);
            gamelogic->xiayi(matrix);
            drawJewel();
            score += 300;
            ui->scoreshow->setText(QString::number(score));
            sleep(1000);
        }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
        if(gamelogic->all_cannot(matrix))
        {
            timer->stop();
            ui->allcannot->show();
            ui->allcannot->raise();
        }
    }
}


void CGameDlg::tishislot()
{
    Z z1, z2;
    gamelogic->tishi(matrix, z1, z2);

    int xpos1 = jewel[z1.x-1][z1.y-1]->xpos;
    int ypos1 = jewel[z1.x-1][z1.y-1]->ypos;
    int xpos2 = jewel[z2.x-1][z2.y-1]->xpos;
    int ypos2 = jewel[z2.x-1][z2.y-1]->ypos;
    QPropertyAnimation* animation1 = new QPropertyAnimation(jewel[z1.x-1][z1.y-1], "pos");
    QPropertyAnimation* animation2 = new QPropertyAnimation(jewel[z2.x-1][z2.y-1], "pos");
    animation1->setDuration(500);
    animation2->setDuration(500);
    animation1->setStartValue(QPoint(xpos1, ypos1));
    animation1->setEndValue(QPoint(xpos2, ypos2));
    animation2->setStartValue(QPoint(xpos2, ypos2));
    animation2->setEndValue(QPoint(xpos1, ypos1));
    animation1->start();
    animation2->start();
    sleep(700);

    int xiaoqucount = 0;
    xiaoqucount = gamelogic->jiaohuan1(matrix, z1, z2);
    do{
        drawJewel();
        sleep(700);
        gamelogic->xiayi(matrix);
        drawJewel();
        score -= 20*xiaoqucount;
        ui->scoreshow->setText(QString::number(score));
        sleep(1000);
    }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
    if(gamelogic->all_cannot(matrix))
    {
        timer->stop();
        ui->allcannot->show();
        ui->allcannot->raise();
    }

}

void CGameDlg::updateProgress()
{
    int nCurrentValue = ui->progressBar->value();
    nCurrentValue--;
    if(nCurrentValue <= 0){
        timer->stop();
        ui->timeout->raise();
        ui->timeout->show();
        ui->pauseorcontinue->setEnabled(false);
        ui->tishi->setEnabled(false);
        timeup->play();
        ui->boom->setEnabled(false);
    }
    ui->progressBar->setValue(nCurrentValue);
}

void CGameDlg::sleep(unsigned int msec){
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void CGameDlg::drawJewel()
{
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            jewel[i][j]->close();
    std::string path;
    int x[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    int y[8] = {20, 70, 120, 170, 220, 270, 320, 370};
    QMovie* movie = new QMovie("../BejeweledSln/image/boom.gif");
    bool isContinue = false;

    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            jewel[i][j] = new Mylabel(i, j, x[j], y[i], path, this);
            if(style == "1"){
                switch(matrix[i][j])
                {
                case 1: path = "../BejeweledSln/image/blue.png";break;
                case 2: path = "../BejeweledSln/image/green.png";break;
                case 3: path = "../BejeweledSln/image/lightblue.png";break;
                case 4: path = "../BejeweledSln/image/orange.png";break;
                case 5: path = "../BejeweledSln/image/purple.png";break;
                case 6: path = "../BejeweledSln/image/red.png";break;
                case 7: path = "../BejeweledSln/image/yellow.png";break;
                case 8: path = "../BejeweledSln/image/white.png";break;
                case 0:
                    jewel[i][j]->setStyleSheet("");
                    jewel[i][j]->setMovie(movie);
                    jewel[i][j]->setGeometry(x[j], y[i], 50, 50);
                    jewel[i][j]->setScaledContents(true);
                    jewel[i][j]->show();
                    movie->start();
                }
            }else
            {
                switch(matrix[i][j])
                {
                case 1: path = "../BejeweledSln/image/blue2.png";break;
                case 2: path = "../BejeweledSln/image/green2.png";break;
                case 3: path = "../BejeweledSln/image/deepgreen2.png";break;
                case 4: path = "../BejeweledSln/image/orange2.png";break;
                case 5: path = "../BejeweledSln/image/purple2.png";break;
                case 6: path = "../BejeweledSln/image/red2.png";break;
                case 7: path = "../BejeweledSln/image/yellow2.png";break;
                case 8: path = "../BejeweledSln/image/sliver2.png";break;
                case 0:
                    jewel[i][j]->setStyleSheet("");
                    jewel[i][j]->setMovie(movie);
                    jewel[i][j]->setGeometry(x[j], y[i], 50, 50);
                    jewel[i][j]->setScaledContents(true);
                    jewel[i][j]->show();
                    movie->start();
                    isContinue = true;
                }
            }
            if(isContinue)
            {
                isContinue = false;
                continue;
            }
            QPixmap pix(path.c_str());
            jewel[i][j]->setPixmap(pix);
            jewel[i][j]->path = path;
            jewel[i][j]->setScaledContents(true);
            jewel[i][j]->setGeometry(x[j], y[i], 50, 50);
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }
}


bool CGameDlg::eventFilter(QObject*obj,QEvent* e)
{
    int xiaoqucount = 0;
    if(e->type() == QEvent::MouseButtonPress)
    {
        if(clickflag == 0){
            for(int i = 0; i < 8; i++)
            {
                for(int j = 0; j < 8; j++)
                {
                    if(obj == jewel[i][j])
                    {
                        clickjewel->play();
                        jewel1I = i;
                        jewel1J = j;
                        clickflag = 1;
                        QPixmap pix("../BejeweledSln/image/kuang.png");
                        kuang->setPixmap(pix);
                        kuang->setGeometry(jewel[i][j]->xpos, jewel[i][j]->ypos, 50, 50);
                        kuang->setScaledContents(true);
                        kuang->show();
                        return false;
                    }
                }
            }
        }
        else if(clickflag == 1)
        {
            for(int i = 0; i < 8; i++)
            {
                for(int j = 0; j < 8; j++)
                {
                    if(obj == jewel[i][j])
                    {
                        clickjewel->play();
                        kuang->hide();
                        if((i == jewel1I-1 && j == jewel1J)|| (i == jewel1I+1 && j == jewel1J)
                                || (j == jewel1J -1 && i == jewel1I) || (j == jewel1J+1 && i == jewel1I))
                        {

                            //two jewel switch animation
                            int xpos1 = jewel[jewel1I][jewel1J]->xpos;
                            int ypos1 = jewel[jewel1I][jewel1J]->ypos;
                            int xpos2 = jewel[i][j]->xpos;
                            int ypos2 = jewel[i][j]->ypos;
                            QPropertyAnimation* animation1 = new QPropertyAnimation(jewel[jewel1I][jewel1J], "pos");
                            QPropertyAnimation* animation2 = new QPropertyAnimation(jewel[i][j], "pos");
                            animation1->setDuration(500);
                            animation2->setDuration(500);
                            animation1->setStartValue(QPoint(xpos1, ypos1));
                            animation1->setEndValue(QPoint(xpos2, ypos2));
                            animation2->setStartValue(QPoint(xpos2, ypos2));
                            animation2->setEndValue(QPoint(xpos1, ypos1));
                            animation1->start();
                            animation2->start();
                            sleep(700);
                            Z z1, z2;
                            z1.x = jewel[jewel1I][jewel1J]->x+1;
                            z1.y = jewel[jewel1I][jewel1J]->y+1;
                            z2.x = jewel[i][j]->x+1;
                            z2.y = jewel[i][j]->y+1;
                            if((xiaoqucount = gamelogic->jiaohuan1(matrix, z1, z2)) == 0)
                            {
                                animation1->setDuration(500);
                                animation2->setDuration(500);
                                animation1->setStartValue(QPoint(xpos2, ypos2));
                                animation1->setEndValue(QPoint(xpos1, ypos1));
                                animation2->setStartValue(QPoint(xpos1, ypos1));
                                animation2->setEndValue(QPoint(xpos2, ypos2));
                                animation1->start();
                                animation2->start();
                                sleep(500);
                                clickflag = 0;
                                return false;
                            }else
                            {

                                do{
                                    xiaoqu->play();
                                    drawJewel();
                                    sleep(700);
                                    gamelogic->xiayi(matrix);
                                    drawJewel();
                                    score += 100*xiaoqucount;
                                    if(xiaoqucount > 4)
                                    {
                                        boomcount++;
                                        ui->boomcount->setText(QString::number(boomcount));
                                    }
                                    if(xiaoqucount >= 6)
                                        perfect->play();
                                    ui->scoreshow->setText(QString::number(score));
                                    sleep(1000);
                                }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
                            }
                            if(gamelogic->all_cannot(matrix))
                            {
                                timer->stop();
                                ui->allcannot->show();
                                ui->allcannot->raise();
                            }
                        }
                        clickflag = 0;
                        return false;
                    }
                }
            }
        }
    }
    return false;
}



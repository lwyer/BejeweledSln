#include "CGameDlg_2.h"
#include "ui_CGameDlg_2.h"
#include <iostream>
#include "ui_CMenuDlg.h"


CGameDlg_2::CGameDlg_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg_2)
{
    clickjewel = new QSound("../BejeweledSln/sound/clickjewel.wav");
    xiaoqu = new QSound("../BejeweledSln/sound/xiaoqu.wav");

    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/zen1.mp3"));
    player->setVolume(configIni->value("Music/volume").toInt());
    player->play();
    goodbye = new QMediaPlayer;
    goodbye->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/goodbye.wav"));
    goodbye->setVolume(100);


    if(configIni->value("Switch/BgMusic").toString() == "0")
        player->setVolume(0);
    if(configIni->value("Switch/Sound").toString() == "0")
    {
        clickjewel = new QSound("../BejeweledSln/sound/wu.wav");
        xiaoqu = new QSound("../BejeweledSln/sound/wu.wav");
        goodbye->setVolume(0);
    }

    ui->setupUi(this);
    style = configIni->value("Picture/Style").toString();

    ui->background->setPixmap(configIni->value("Picture/BgPic").toString());
    ui->background->setScaledContents(true);
    ui->scoreshow->setText("0");
    ui->menu->setFocusPolicy(Qt::NoFocus);

    gamelogic = new CGameLogic_2(6);
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
            jewel[i][j]->setAttribute(Qt::WA_Hover,true);
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }

    ui->allcannot->hide();
    ui->levelcomplete->hide();
    clickflag = 0;
    kuang = new QLabel(this);
    kuang->hide();
    score = 0;
    level = 1;
    boomcount = 0;
    ui->boomcount->setText(QString::number(boomcount));

    ui->scorebar->setRange(0, 1200);
    ui->scorebar->setValue(0);
}

CGameDlg_2::~CGameDlg_2()
{
 //   delete ui;
}

void CGameDlg_2::boom()
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
        if(gamelogic->wanfa2_all_cannot(matrix))
        {
            ui->allcannot->show();
            ui->allcannot->raise();
        }
    }
}

void CGameDlg_2::tishislot()
{
    int xiaoqucount = 0;
    Z z1;
    gamelogic->wanfa2_tishi(matrix, z1);
    int i = z1.x-1;
    int j = z1.y-1;

    xiaoqucount = gamelogic->wanfa2_jiaohuan1(matrix, z1);

    QPropertyAnimation* animation1 = new QPropertyAnimation(jewel[i][j], "pos");
    QPropertyAnimation* animation2 = new QPropertyAnimation(jewel[i+1][j], "pos");
    QPropertyAnimation* animation3 = new QPropertyAnimation(jewel[i][j+1], "pos");
    QPropertyAnimation* animation4 = new QPropertyAnimation(jewel[i+1][j+1], "pos");
    animation1->setDuration(500);
    animation2->setDuration(500);
    animation3->setDuration(500);
    animation4->setDuration(500);
    animation1->setStartValue(QPoint(jewel[i][j]->xpos, jewel[i][j]->ypos));
    animation1->setEndValue(QPoint(jewel[i][j+1]->xpos, jewel[i][j+1]->ypos));
    animation2->setStartValue(QPoint(jewel[i+1][j]->xpos, jewel[i+1][j]->ypos));
    animation2->setEndValue(QPoint(jewel[i][j]->xpos, jewel[i][j]->ypos));
    animation3->setStartValue(QPoint(jewel[i][j+1]->xpos, jewel[i][j+1]->ypos));
    animation3->setEndValue(QPoint(jewel[i+1][j+1]->xpos, jewel[i+1][j+1]->ypos));
    animation4->setStartValue(QPoint(jewel[i+1][j+1]->xpos, jewel[i+1][j+1]->ypos));
    animation4->setEndValue(QPoint(jewel[i+1][j]->xpos, jewel[i+1][j]->ypos));
    animation1->start();
    animation2->start();
    animation3->start();
    animation4->start();
    sleep(500);

    do{
        xiaoqu->play();
        drawJewel();
        sleep(700);
        gamelogic->xiayi(matrix);
        drawJewel();
        score -= 20*xiaoqucount;
        if(xiaoqucount > 4)
        {
            boomcount++;
            ui->boomcount->setText(QString::number(boomcount));
        }
        if(score < ui->scorebar->maximum())
            ui->scorebar->setValue(score);
        else
            ui->scorebar->setValue(ui->scorebar->maximum());
        ui->scoreshow->setText(QString::number(score));
        sleep(1000);
    }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
    if(gamelogic->wanfa2_all_cannot(matrix))
    {
        ui->allcannot->show();
        ui->allcannot->raise();
        ui->tishi->setEnabled(false);
        ui->boom->setEnabled(false);
    }

}

void CGameDlg_2::closeEvent(QCloseEvent *event)
{
    goodbye->play();
    this->hide();
    sleep(1500);
    event->accept();
}

void CGameDlg_2::menu()
{
    CMenuDlg* w = new CMenuDlg(this);
    connect(w->ui->backtohome, SIGNAL(clicked()), this, SLOT(backtohome()));
    w->show();
    w->exec();
}

void CGameDlg_2::backtohome()
{
    this->close();
    player->stop();
    CBejeweledDlg w;
    w.show();
    w.exec();
}

void CGameDlg_2::sleep(unsigned int msec){
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void CGameDlg_2::drawJewel()
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
            jewel[i][j]->setAttribute(Qt::WA_Hover,true);
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }
}

bool CGameDlg_2::eventFilter(QObject*obj,QEvent* e)
{
    int xiaoqucount = 0;
    QMovie* movie = new QMovie("../BejeweledSln/image/kuang.gif");
    if(e->type() == QEvent::HoverEnter)
    {
        for(int i = 0; i < 7; i++)
        {
            for(int j = 0; j < 7; j++)
            {
                if(obj == jewel[i][j])
                {
                    kuang->close();
                    kuang->setGeometry(jewel[i][j]->xpos, jewel[i][j]->ypos, 100, 100);
                    kuang->setScaledContents(true);
                    kuang->setMovie(movie);
                    movie->start();
                    kuang->show();
                    kuang->lower();
                    ui->gamepanel->lower();
                    ui->background->lower();
                }
            }
        }
    }
    if(e->type() == QEvent::MouseButtonPress)
    {
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(obj == jewel[i][j])
                {
                    clickjewel->play();
                    Z z1;
                    z1.x = jewel[i][j]->x+1;
                    z1.y = jewel[i][j]->y+1;
                    if((xiaoqucount = gamelogic->wanfa2_jiaohuan1(matrix, z1))==0)
                        return false;
                    else
                    {
                        QPropertyAnimation* animation1 = new QPropertyAnimation(jewel[i][j], "pos");
                        QPropertyAnimation* animation2 = new QPropertyAnimation(jewel[i+1][j], "pos");
                        QPropertyAnimation* animation3 = new QPropertyAnimation(jewel[i][j+1], "pos");
                        QPropertyAnimation* animation4 = new QPropertyAnimation(jewel[i+1][j+1], "pos");
                        animation1->setDuration(500);
                        animation2->setDuration(500);
                        animation3->setDuration(500);
                        animation4->setDuration(500);
                        animation1->setStartValue(QPoint(jewel[i][j]->xpos, jewel[i][j]->ypos));
                        animation1->setEndValue(QPoint(jewel[i][j+1]->xpos, jewel[i][j+1]->ypos));
                        animation2->setStartValue(QPoint(jewel[i+1][j]->xpos, jewel[i+1][j]->ypos));
                        animation2->setEndValue(QPoint(jewel[i][j]->xpos, jewel[i][j]->ypos));
                        animation3->setStartValue(QPoint(jewel[i][j+1]->xpos, jewel[i][j+1]->ypos));
                        animation3->setEndValue(QPoint(jewel[i+1][j+1]->xpos, jewel[i+1][j+1]->ypos));
                        animation4->setStartValue(QPoint(jewel[i+1][j+1]->xpos, jewel[i+1][j+1]->ypos));
                        animation4->setEndValue(QPoint(jewel[i+1][j]->xpos, jewel[i+1][j]->ypos));
                        animation1->start();
                        animation2->start();
                        animation3->start();
                        animation4->start();
                        sleep(500);

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
                            if(score < ui->scorebar->maximum())
                                ui->scorebar->setValue(score);
                            else
                                ui->scorebar->setValue(ui->scorebar->maximum());
                            ui->scoreshow->setText(QString::number(score));
                            sleep(1000);
                        }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
                    }
                    if(gamelogic->wanfa2_all_cannot(matrix))
                    {
                        ui->allcannot->show();
                        ui->allcannot->raise();
                        ui->tishi->setEnabled(false);
                        ui->boom->setEnabled(false);
                    }
                }
            }
        }

    }

    return false;

}



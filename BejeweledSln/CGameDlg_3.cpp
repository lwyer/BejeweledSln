#include "CGameDlg_3.h"
#include "ui_CGameDlg_3.h"
#include "ui_CMenuDlg.h"

CGameDlg_3::CGameDlg_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg_3)
{    
    clickjewel = new QSound("../BejeweledSln/sound/clickjewel.wav");
    xiaoqu = new QSound("../BejeweledSln/sound/xiaoqu.wav");
    perfect = new QMediaPlayer;
    perfect->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/perfect.wav"));
    perfect->setVolume(70);
    levelcomplete = new QMediaPlayer;
    levelcomplete->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/levelcomplete.wav"));
    levelcomplete->setVolume(70);
    goodbye = new QMediaPlayer;
    goodbye->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/goodbye.wav"));
    goodbye->setVolume(100);

    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/butterfly.mp3"));
    player->setVolume(configIni->value("Music/volume").toInt());
    player->play();

    style = configIni->value("Picture/Style").toString();

    ui->setupUi(this);
    ui->background->setPixmap(QPixmap(configIni->value("Picture/BgPic").toString()));
    ui->background->setScaledContents(true);
    ui->menu->setFocusPolicy(Qt::NoFocus);

    gamelogic = new CGameLogic_3(6);
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

    ui->allcannot->hide();
    clickflag = 0;
    kuang = new QLabel(this);
    kuang->hide();
    score = 0;
    xiaoqucounting = 0;
    level = 1;
    boomcount = 0;
    redorblue = 0;

    timer = new QTimer(this);
    timer->setInterval(50);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateProgress()));
    timer->start();
}

CGameDlg_3::~CGameDlg_3()
{
    delete ui;
}

void CGameDlg_3::closeEvent(QCloseEvent *event)
{
    goodbye->play();
    this->hide();
    sleep(1500);
    event->accept();
}

void CGameDlg_3::menu()
{
    CMenuDlg* w = new CMenuDlg(this);
    connect(w->ui->backtohome, SIGNAL(clicked()), this, SLOT(backtohome()));
    w->show();
    w->exec();
}

void CGameDlg_3::backtohome()
{
    this->close();
    player->stop();
    CBejeweledDlg w;
    w.show();
    w.exec();
}

void CGameDlg_3::tishislot()
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
        xiaoqucounting-=xiaoqucount;
        ui->scoreshow->setText(QString::number(xiaoqucounting)+"/120");
        sleep(1000);
    }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
    if(gamelogic->all_cannot(matrix))
    {
        ui->allcannot->show();
        ui->allcannot->raise();
    }

}

void CGameDlg_3::updateProgress()
{
    int rCurrentValue = ui->redprogressbar->value();
    int bCurrentValue = ui->blueprogressbar->value();

    if(redorblue == 1){
        rCurrentValue--;
        bCurrentValue++;
        ui->redprogressbar->setValue(rCurrentValue);
        ui->blueprogressbar->setValue(bCurrentValue);
    }else if(redorblue == 2){
        rCurrentValue++;
        bCurrentValue--;
        ui->redprogressbar->setValue(rCurrentValue);
        ui->blueprogressbar->setValue(bCurrentValue);
    }

    if(rCurrentValue <= 0 || bCurrentValue <= 0){
        timer->stop();
        ui->allcannot->show();
        ui->allcannot->raise();
    }
}

void CGameDlg_3::sleep(unsigned int msec){
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void CGameDlg_3::drawJewel()
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


bool CGameDlg_3::eventFilter(QObject*obj,QEvent* e)
{
    int xiaoqucount = 0;
    QMovie* movie = new QMovie("../BejeweledSln/image/levelcomplete.gif");
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
                                    if(xiaoqucount >= 6)
                                        perfect->play();
                                    xiaoqucounting+=xiaoqucount;
                                    ui->redlabel->setText("Red: "+QString::number(gamelogic->red));
                                    ui->bluelabel->setText("Blue: "+ QString::number(gamelogic->blue));
                                    if(gamelogic->red > gamelogic->blue)
                                        redorblue = 2;
                                    else if(gamelogic->red < gamelogic->blue)
                                        redorblue = 1;
                                    else
                                        redorblue = 0;
                                    ui->scoreshow->setText(QString::number(xiaoqucounting)+"/120");
                                    sleep(1000);
                                }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);

                                if(xiaoqucounting>=120)
                                {
                                    levelcomplete->play();
                                    ui->levelcomplete->setMovie(movie);
                                    ui->levelcomplete->show();
                                    ui->levelcomplete->raise();
                                    movie->start();
                                    sleep(2000);
                                    ui->levelcomplete->close();
                                    player->stop();
                                    CGamePass w;
                                    w.setWindowModality(Qt::ApplicationModal);
                                    w.show();;
                                    w.exec();
                                    this->close();
                                 }
                            }
                            if(gamelogic->all_cannot(matrix))
                            {
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




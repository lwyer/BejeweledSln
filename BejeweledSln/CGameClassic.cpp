#include "CGameClassic.h"
#include "ui_CGameClassic.h"

CGameClassic::CGameClassic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameClassic)
{
    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
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

    ui->allcannot->hide();
    ui->levelcomplete->hide();
    isPause = false;
    clickflag = 0;
    kuang = new QLabel(this);
    kuang->hide();
    score = 0;
    level = 1;

    ui->scorebar->setRange(0, 1200);
    ui->scorebar->setValue(0);

}

CGameClassic::~CGameClassic()
{
 //   delete ui;
}

void CGameClassic::tishislot()
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
        if(score > 0)
            ui->scorebar->setValue(score);
        else
            ui->scorebar->setValue(0);
        ui->scoreshow->setText(QString::number(score));
        sleep(1000);
    }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
    if(gamelogic->all_cannot(matrix))
    {
        ui->allcannot->show();
        ui->allcannot->raise();
    }

}

void CGameClassic::sleep(unsigned int msec){
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void CGameClassic::drawJewel()
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


bool CGameClassic::eventFilter(QObject*obj,QEvent* e)
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
                                    drawJewel();
                                    sleep(700);
                                    gamelogic->xiayi(matrix);
                                    drawJewel();
                                    score += 100*xiaoqucount;
                                    if(score < ui->scorebar->maximum())
                                        ui->scorebar->setValue(score);
                                    else
                                        ui->scorebar->setValue(ui->scorebar->maximum());
                                    ui->scoreshow->setText(QString::number(score));
                                    sleep(1000);
                                }while((xiaoqucount = gamelogic->xiaoqu2(matrix)) != 0);
                                if(score >= 1200 && level == 1)
                                {
                                    ui->levelcomplete->setMovie(movie);
                                    ui->levelcomplete->show();
                                    ui->levelcomplete->raise();
                                    movie->start();
                                    sleep(2000);
                                    ui->levelcomplete->close();
                                    level++;
                                    gamelogic = new CGameLogic(7);
                                    gamelogic->init(matrix);
                                    drawJewel();
                                    ui->scorebar->setRange(0, 2400);
                                    ui->scorebar->setValue(0);
                                    score = 0;
                                    ui->scoreshow->setText("0");                                 
                                }else if(score >= 2400 && level == 2)
                                {
                                    ui->levelcomplete->setMovie(movie);
                                    ui->levelcomplete->show();
                                    ui->levelcomplete->raise();
                                    movie->start();
                                    sleep(2000);
                                    ui->levelcomplete->close();
                                    level++;
                                    gamelogic = new CGameLogic(8);
                                    gamelogic->init(matrix);
                                    drawJewel();
                                    ui->scorebar->setRange(0, 3000);
                                    ui->scorebar->setValue(0);
                                    score = 0;
                                    ui->scoreshow->setText("0");
                                }else if(score >= 3000 && level == 3)
                                {
                                    ui->levelcomplete->setMovie(movie);
                                    ui->levelcomplete->show();
                                    ui->levelcomplete->raise();
                                    movie->start();
                                    sleep(2000);
                                    ui->levelcomplete->close();
                                    level++;
                                    gamelogic = new CGameLogic(8);
                                    gamelogic->init(matrix);
                                    drawJewel();
                                    ui->scorebar->setRange(0, 3000);
                                    ui->scorebar->setValue(0);
                                    score = 0;
                                    ui->scoreshow->setText("0");
                                }else if(score >= 4200 && level == 4)
                                {
                                    ui->levelcomplete->setMovie(movie);
                                    ui->levelcomplete->show();
                                    ui->levelcomplete->raise();
                                    movie->start();
                                    sleep(2000);
                                    ui->levelcomplete->close();
                                    level++;
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



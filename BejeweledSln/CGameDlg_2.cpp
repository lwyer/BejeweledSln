#include "CGameDlg_2.h"
#include "ui_CGameDlg_2.h"
#include <iostream>

CGameDlg_2::CGameDlg_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg_2)
{
    ui->setupUi(this);
    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    style = configIni->value("Picture/Style").toString();

    ui->background->setPixmap(configIni->value("Picture/BgPic").toString());
    ui->background->setScaledContents(true);
    ui->scoreshow->setText("0");
    ui->menu->setFocusPolicy(Qt::NoFocus);

    gamelogic = new CGameLogic_2(5);
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

    ui->scorebar->setRange(0, 1200);
    ui->scorebar->setValue(0);
}

CGameDlg_2::~CGameDlg_2()
{
 //   delete ui;
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
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }
}

bool CGameDlg_2::eventFilter(QObject*obj,QEvent* e)
{
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
                }
            }
        }
    }
    if(e->type() == QEvent::MouseButtonPress)
    {

    }

    return false;

}



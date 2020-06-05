#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QDebug>
#include <iostream>

CGameDlg::CGameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg)
{
    ui->setupUi(this);
    ui->background->setPixmap(QPixmap("../BejeweledSln/image/background1.jpg"));
    ui->background->setScaledContents(true);
    ui->scoreshow->setText("0");
    ui->menu->setFocusPolicy(Qt::NoFocus);

    gamelogic = new CGameLogic(6);
    gamelogic->init(matrix);
    std::string path;
    int x[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    int y[8] = {20, 70, 120, 170, 220, 270, 320, 370};

    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    style = configIni->value("Picture/Style").toString();
    qDebug() << style;
    delete configIni;

    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            jewel[i][j] = new Mylabel(i, j, x[j], y[i], path, this);
            switch(matrix[i][j])
            {
            case 1: path = "../BejeweledSln/image/blue.png";break;
            case 2: path = "../BejeweledSln/image/green.png";break;
            case 3: path = "../BejeweledSln/image/lightblue.png";break;
            case 4: path = "../BejeweledSln/image/orange.png";break;
            case 5: path = "../BejeweledSln/image/purple.png";break;
            case 6: path = "../BejeweledSln/image/red.png";break;
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
       return;
    }else if(ev->key() == Qt::Key_B && isPause)
    {
        ui->pause->hide();
        isPause = false;
        timer->start();
        return;
    }

    QWidget::keyPressEvent(ev);
}

void CGameDlg::keyReleaseEvent(QKeyEvent *ev)
{
    QWidget::keyReleaseEvent(ev);
}

CGameDlg::~CGameDlg()
{
    delete ui;
}

void CGameDlg::menu()
{
    CMenuDlg w;
    w.show();
    w.exec();
    ui->pause->show();
}

void CGameDlg::updateProgress()
{
    int nCurrentValue = ui->progressBar->value();
    nCurrentValue--;
    if(nCurrentValue <= 0){
        timer->stop();
        ui->timeout->raise();
        ui->timeout->show();
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

    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            jewel[i][j] = new Mylabel(i, j, x[j], y[i], path, this);
            switch(matrix[i][j])
            {
            case 1: path = "../BejeweledSln/image/blue.png";break;
            case 2: path = "../BejeweledSln/image/green.png";break;
            case 3: path = "../BejeweledSln/image/lightblue.png";break;
            case 4: path = "../BejeweledSln/image/orange.png";break;
            case 5: path = "../BejeweledSln/image/purple.png";break;
            case 6: path = "../BejeweledSln/image/red.png";break;
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
                            sleep(1000);
                            Z z1, z2;
                            z1.x = jewel[jewel1I][jewel1J]->x+1;
                            z1.y = jewel[jewel1I][jewel1J]->y+1;
                            z2.x = jewel[i][j]->x+1;
                            z2.y = jewel[i][j]->y+1;
                            if(!gamelogic->jiaohuan1(matrix, z1, z2))
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
                                    score += 100;
                                    ui->scoreshow->setText(QString::number(score));
                                    sleep(1000);
                                }while(gamelogic->xiaoqu2(matrix));
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

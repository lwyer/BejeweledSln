#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QDebug>

CGameDlg::CGameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg)
{
    ui->setupUi(this);
    ui->background->setPixmap(QPixmap("../BejeweledSln/image/background1.jpg"));
    ui->background->setScaledContents(true);
    ui->scoreshow->setText("0");
    ui->menu->setFocusPolicy(Qt::NoFocus);
    int matrix[8][8];
    CGameLogic* gamelogic = new CGameLogic(6);
    gamelogic->init(matrix);
    std::string path;
    int x[8] = {50, 100, 150, 200, 250, 300, 350, 400};
    int y[8] = {20, 70, 120, 170, 220, 270, 320, 370};

    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            jewel[i][j] = new Mylabel(i, j, x[i], y[j], path, this);
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
            jewel[i][j]->setScaledContents(true);
            jewel[i][j]->setGeometry(x[i], y[j], 50, 50);
            jewel[i][j]->installEventFilter(this);
            jewel[i][j]->show();
        }
    }

    ui->pause->hide();
    isPause = false;
    clickflag = 0;
}


void CGameDlg::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_B && !isPause)
    {
       ui->pause->show();
       ui->pause->raise();
       isPause = true;
       return;
    }else if(ev->key() == Qt::Key_B && isPause)
    {
        ui->pause->hide();
        isPause = false;
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
                        jewel[i][j]=j;
                    }
                }
            }
        }
        if(clickflag == 1)
        {

        }
    }
    return false;
}

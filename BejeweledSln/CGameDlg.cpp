#include "CGameDlg.h"
#include "ui_CGameDlg.h"

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
    CGameLogic gamelogic;
    gamelogic.init(matrix);
    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
        }
    }
}


void CGameDlg::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_B)
    {
       CMenuDlg w;
       w.setWindowModality(Qt::ApplicationModal);
       w.show();
       w.exec();
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
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

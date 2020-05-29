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

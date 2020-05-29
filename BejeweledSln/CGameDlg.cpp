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

}

CGameDlg::~CGameDlg()
{
    delete ui;
}

#include "CGameMode.h"
#include "ui_CGameMode.h"

CGameMode::CGameMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameMode)
{
    ui->setupUi(this);
}

CGameMode::~CGameMode()
{
  // delete ui;
}

void CGameMode::lightning()
{
    CGameDlg w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::back()
{
    CBejeweledDlg w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::classic()
{
    CGameClassic w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::jewel2()
{
    CGameDlg_2 w;
    this->close();
    w.show();
    w.exec();
}

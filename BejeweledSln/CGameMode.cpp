#include "CGameMode.h"
#include "ui_CGameMode.h"

CGameMode::CGameMode(QMediaPlayer* player, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameMode)
{
    ui->setupUi(this);
    this->player = player;
}

CGameMode::~CGameMode()
{
  // delete ui;
}

void CGameMode::lightning()
{
    CGameDlg w;
    player->stop();
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
    player->stop();
    this->close();
    w.show();
    w.exec();
}

void CGameMode::jewel2()
{
    CGameDlg_2 w;
    player->stop();
    this->close();
    w.show();
    w.exec();
}

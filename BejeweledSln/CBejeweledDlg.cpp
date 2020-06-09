#include "CBejeweledDlg.h"
#include "ui_cbejeweleddlg.h"

CBejeweledDlg::CBejeweledDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CBejeweledDlg)
{
    ui->setupUi(this);

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/theme.mp3"));
    player->setVolume(50);
    player->play();
    QMediaPlayer* welcomeSound = new QMediaPlayer;
    welcomeSound->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/welcomeback.wav"));
    welcomeSound->play();
}


CBejeweledDlg::~CBejeweledDlg()
{
  //  delete ui;
}

void CBejeweledDlg::start()
{
    CGameMode* w = new CGameMode(player, this);
    this->close();
    w->show();
    w->exec();
}

void CBejeweledDlg::config()
{
    CSetDlg* w = new CSetDlg(player, this);
    w->setWindowModality(Qt::ApplicationModal);
    w->show();
    w->exec();
}

void CBejeweledDlg::score()
{
    CRankDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

void CBejeweledDlg::help()
{
    CHelpDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

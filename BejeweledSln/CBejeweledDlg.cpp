#include "CBejeweledDlg.h"
#include "ui_cbejeweleddlg.h"

CBejeweledDlg::CBejeweledDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CBejeweledDlg)
{
    ui->setupUi(this);

    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:/BejeweledSln/BejeweledSln/backgroundMusic/theme.mp3"));
    player->setVolume(50);
    player->play();
}


CBejeweledDlg::~CBejeweledDlg()
{
  //  delete ui;
}

void CBejeweledDlg::start()
{
    CGameMode w;
    this->close();
    w.show();
    w.exec();
}

void CBejeweledDlg::config()
{
    CSetDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
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

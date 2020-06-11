#include "CBejeweledDlg.h"
#include "ui_cbejeweleddlg.h"
#include "ui_CSetDlg.h"

CBejeweledDlg::CBejeweledDlg(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CBejeweledDlg)
{
    this->id = id;
    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);

    ui->setupUi(this);

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/theme.mp3"));
    player->setVolume(configIni->value("Music/volume").toInt());
    player->play();
    welcomeSound = new QMediaPlayer;
    welcomeSound->setMedia(QUrl::fromLocalFile("../BejeweledSln/sound/welcomeback.wav"));
    welcomeSound->play();

    keypress = new QSound("../BejeweledSln/sound/click.wav");
    if(configIni->value("Switch/BgMusic").toString() == "0")
        player->setVolume(0);
    if(configIni->value("Switch/Sound").toString() == "0")
    {
        keypress = new QSound("../BejeweledSln/sound/wu.wav");
        welcomeSound->setVolume(0);
    }
}


CBejeweledDlg::~CBejeweledDlg()
{
  //  delete ui;
}

void CBejeweledDlg::start()
{
    keypress->play();
    CGameMode* w = new CGameMode(id, player, this);
    this->close();
    w->show();
    w->exec();
}

void CBejeweledDlg::config()
{
    keypress->play();
    CSetDlg* w = new CSetDlg(player, this);
    connect(w->ui->pushButton, SIGNAL(clicked()), this, SLOT(homeupdate()));
    w->setWindowModality(Qt::ApplicationModal);
    w->show();
    w->exec();
}

void CBejeweledDlg::score()
{
    keypress->play();
    CRankDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

void CBejeweledDlg::help()
{
    keypress->play();
    CHelpDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

void CBejeweledDlg::homeupdate()
{
    if(configIni->value("Switch/BgMusic").toString() == "0")
        player->setVolume(0);
    else
        player->setVolume(configIni->value("Music/volume").toInt());
    if(configIni->value("Switch/Sound").toString() == "0")
    {
        keypress = new QSound("../BejeweledSln/sound/wu.wav");
        welcomeSound->setVolume(0);
    }
    else
        keypress = new QSound("../BejeweledSln/sound/click.wav");
        welcomeSound->setVolume(100);

}

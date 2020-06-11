#include "CGameMode.h"
#include "ui_CGameMode.h"

CGameMode::CGameMode(int id, QMediaPlayer* player, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameMode)
{
    this->id = id;
    QSettings* configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);

    ui->setupUi(this);
    this->player = player;

    keypress = new QSound("../BejeweledSln/sound/clickgame.wav");
    if(configIni->value("Switch/BgMusic").toString() == "0")
        player->setVolume(0);
    if(configIni->value("Switch/Sound").toString() == "0")
    {
        keypress = new QSound("../BejeweledSln/sound/wu.wav");
    }
}

CGameMode::~CGameMode()
{
  // delete ui;
}
void CGameMode::sleep(unsigned int msec){
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void CGameMode::lightning()
{
    player->stop();
    keypress->play();
    sleep(4000);
    CGameDlg* w = new CGameDlg(id, this);
    this->close();
    w->show();
    w->exec();
}


void CGameMode::back()
{    
    player->stop();
    CBejeweledDlg* w = new CBejeweledDlg(id, this);
    this->close();
    w->show();
    w->exec();
}

void CGameMode::classic()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameClassic* w = new CGameClassic(id, this);
    this->close();
    w->show();
    w->exec();
}

void CGameMode::jewel2()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameDlg_2* w=new CGameDlg_2(id, this);
    this->close();
    w->show();
    w->exec();
}

void CGameMode::balance()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameDlg_3* w = new CGameDlg_3(id, this);
    this->close();
    w->show();
    w->exec();
}

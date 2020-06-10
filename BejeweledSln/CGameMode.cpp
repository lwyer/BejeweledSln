#include "CGameMode.h"
#include "ui_CGameMode.h"

CGameMode::CGameMode(QMediaPlayer* player, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameMode)
{
    ui->setupUi(this);
    this->player = player;

    keypress = new QSound("../BejeweledSln/sound/clickgame.wav");
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
    CGameDlg w;
    this->close();
    w.show();
    w.exec();
}


void CGameMode::back()
{    
    player->stop();
    CBejeweledDlg w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::classic()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameClassic w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::jewel2()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameDlg_2 w;
    this->close();
    w.show();
    w.exec();
}

void CGameMode::balance()
{
    player->stop();

    keypress->play();
    sleep(4000);

    CGameDlg_3 w;
    this->close();
    w.show();
    w.exec();
}

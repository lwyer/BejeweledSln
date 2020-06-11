#ifndef CGAMEDLG_H
#define CGAMEDLG_H

#include <QDialog>
#include "CMenuDlg.h"
#include <QWidget>
#include <QKeyEvent>
#include "CGameLogic.h"
#include "mylabel.h"
#include <QTime>
#include <QTimer>
#include <QPropertyAnimation>
#include <QSettings>
#include <QMovie>
#include <QMediaPlayer>
#include <QSound>
#include "CBejeweledDlg.h"
#include "database.h"

namespace Ui {
class CGameDlg;
}

class CGameDlg : public QDialog
{
    Q_OBJECT

public:

    explicit CGameDlg(int id, QWidget *parent = 0);
    ~CGameDlg();
    bool eventFilter(QObject*obj,QEvent* e);
    Mylabel* jewel[8][8];
    int jewel1I;
    int jewel1J;            //switch jewel
    CGameLogic* gamelogic;
    QLabel* kuang;
    int matrix[8][8];
    int score;
    void drawJewel();
    QTimer* timer;
    void sleep(unsigned int msec);
    QSettings *configIni;
    QString style;
    int boomcount;
private:
    Ui::CGameDlg *ui;
    bool isPause;
    int clickflag;
    QMediaPlayer* player;
    QSound* clickjewel;
    QSound* xiaoqu;
    QMediaPlayer* perfect;
    QMediaPlayer* timeup;
    QMediaPlayer* goodbye;
    int id;
    DataBase d;
protected:
    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);
    void closeEvent(QCloseEvent *event);

private slots:
    void menu();
    void updateProgress();
    void pauseorcontinue();
    void tishislot();
    void backtohome();
    void boom();
};

#endif // CGAMEDLG_H

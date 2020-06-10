#ifndef CGAMECLASSIC_H
#define CGAMECLASSIC_H

#include <QDialog>
#include "CMenuDlg.h"
#include <QWidget>
#include "CGameLogic.h"
#include "mylabel.h"
#include <QTime>
#include <QPropertyAnimation>
#include <QSettings>
#include <QMovie>
#include <CGamePass.h>
#include "CBejeweledDlg.h"

namespace Ui {
class CGameClassic;
}

class CGameClassic : public QDialog
{
    Q_OBJECT

public:
    explicit CGameClassic(QWidget *parent = 0);
    ~CGameClassic();

    bool eventFilter(QObject*obj,QEvent* e);
    Mylabel* jewel[8][8];
    int jewel1I;
    int jewel1J;            //switch jewel
    CGameLogic* gamelogic;
    QLabel* kuang;
    int matrix[8][8];
    int score;
    void drawJewel();
    void sleep(unsigned int msec);
    QSettings *configIni;
    QString style;
    QSound* clickjewel;
    QSound* xiaoqu;
    int boomcount;
    QMediaPlayer* perfect;
    QMediaPlayer* levelcomplete;

private:
    Ui::CGameClassic *ui;
    bool isPause;
    int clickflag;
    int level;
    QMediaPlayer* player;
    QMediaPlayer* goodbye;

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void tishislot();
    void menu();
    void backtohome();
    void boom();

};

#endif // CGAMECLASSIC_H

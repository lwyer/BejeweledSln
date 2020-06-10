#ifndef CGAMEDLG_3_H
#define CGAMEDLG_3_H

#include <QDialog>
#include "CMenuDlg.h"
#include <QWidget>
#include "cgamelogic_3.h"
#include "mylabel.h"
#include <QTime>
#include <QPropertyAnimation>
#include <QSettings>
#include <QMovie>
#include <CGamePass.h>
#include "CBejeweledDlg.h"
#include <QTimer>

namespace Ui {
class CGameDlg_3;
}

class CGameDlg_3 : public QDialog
{
    Q_OBJECT

public:
    explicit CGameDlg_3(QWidget *parent = 0);
    ~CGameDlg_3();

    bool eventFilter(QObject*obj,QEvent* e);
    Mylabel* jewel[8][8];
    int jewel1I;
    int jewel1J;            //switch jewel
    CGameLogic_3* gamelogic;
    QLabel* kuang;
    int matrix[8][8];
    int score;
    int xiaoqucounting;
    void drawJewel();
    void sleep(unsigned int msec);
    QSettings *configIni;
    QString style;
    QSound* clickjewel;
    QSound* xiaoqu;
    int boomcount;
    QMediaPlayer* perfect;
    QMediaPlayer* levelcomplete;
    int redorblue;
    QTimer* timer;

private:
    Ui::CGameDlg_3 *ui;
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
    void updateProgress();
};

#endif // CGAMEDLG_3_H

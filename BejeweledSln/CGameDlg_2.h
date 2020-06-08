#ifndef CGAMEDLG_2_H
#define CGAMEDLG_2_H

#include <QDialog>
#include "CMenuDlg.h"
#include <QWidget>
#include "CGameLogic_2.h"
#include "mylabel.h"
#include <QTime>
#include <QPropertyAnimation>
#include <QSettings>
#include <QMovie>
#include <CGamePass.h>

namespace Ui {
class CGameDlg_2;
}

class CGameDlg_2 : public QDialog
{
    Q_OBJECT

public:
    explicit CGameDlg_2(QWidget *parent = 0);
    ~CGameDlg_2();

    bool eventFilter(QObject*obj,QEvent* e);
    Mylabel* jewel[8][8];
    CGameLogic_2* gamelogic;
    QLabel* kuang;
    int matrix[8][8];
    int score;
    void drawJewel();
    void sleep(unsigned int msec);
    QSettings *configIni;
    QString style;

private:
    Ui::CGameDlg_2 *ui;
    int clickflag;
    int level;
};

#endif // CGAMEDLG_2_H

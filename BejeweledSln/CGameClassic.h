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
private:
    Ui::CGameClassic *ui;
    bool isPause;
    int clickflag;
private slots:


};

#endif // CGAMECLASSIC_H

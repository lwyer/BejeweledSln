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


namespace Ui {
class CGameDlg;
}

class CGameDlg : public QDialog
{
    Q_OBJECT

public:

    explicit CGameDlg(QWidget *parent = 0);
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
private:
    Ui::CGameDlg *ui;
    bool isPause;
    int clickflag;

protected:
    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);

private slots:
    void menu();
    void updateProgress();
};

#endif // CGAMEDLG_H

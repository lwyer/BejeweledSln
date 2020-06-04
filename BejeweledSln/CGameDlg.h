#ifndef CGAMEDLG_H
#define CGAMEDLG_H

#include <QDialog>
#include "CMenuDlg.h"
#include <QWidget>
#include <QKeyEvent>
#include "CGameLogic.h"
#include "mylabel.h"

namespace Ui {
class CGameDlg;
}

class CGameDlg : public QDialog
{
    Q_OBJECT

public:
    struct jewelnode
    {
        int x;
        int y;
        int xpos;
        int ypos;
    };

    explicit CGameDlg(QWidget *parent = 0);
    ~CGameDlg();
    bool eventFilter(QObject*obj,QEvent* e);
    Mylabel* jewel[8][8];
    jewelnode jewel1;
    jewelnode jewel2;

private:
    Ui::CGameDlg *ui;
    bool isPause;
    int clickflag;

protected:
    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);

private slots:
    void menu();
};

#endif // CGAMEDLG_H

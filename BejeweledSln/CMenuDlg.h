#ifndef CMENUDLG_H
#define CMENUDLG_H

#include <QDialog>
#include <QMovie>
#include <QWidget>
#include <QKeyEvent>
#include "CBejeweledDlg.h"

namespace Ui {
class CMenuDlg;
}

class CMenuDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CMenuDlg(QWidget *parent = 0);
    ~CMenuDlg();
    Ui::CMenuDlg *ui;

protected:
    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);

private:
\
private slots:
    void backtogame();
    void backtohome();
};

#endif // CMENUDLG_H

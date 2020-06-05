#ifndef CMENUDLG_H
#define CMENUDLG_H

#include <QDialog>
#include <QMovie>
#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class CMenuDlg;
}

class CMenuDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CMenuDlg(QWidget *parent = 0);
    ~CMenuDlg();

protected:
    virtual void keyPressEvent(QKeyEvent *ev);
    virtual void keyReleaseEvent(QKeyEvent *ev);

private:
    Ui::CMenuDlg *ui;
};

#endif // CMENUDLG_H

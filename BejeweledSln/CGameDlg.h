#ifndef CGAMEDLG_H
#define CGAMEDLG_H

#include <QDialog>

namespace Ui {
class CGameDlg;
}

class CGameDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CGameDlg(QWidget *parent = 0);
    ~CGameDlg();

private:
    Ui::CGameDlg *ui;
};

#endif // CGAMEDLG_H

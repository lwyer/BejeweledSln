#ifndef CSETDLG_H
#define CSETDLG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class CSetDlg;
}

class CSetDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CSetDlg(QWidget *parent = 0);
    ~CSetDlg();

private:
    Ui::CSetDlg *ui;
};

#endif // CSETDLG_H

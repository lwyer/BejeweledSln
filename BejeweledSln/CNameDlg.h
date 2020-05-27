#ifndef CNAMEDLG_H
#define CNAMEDLG_H

#include <QDialog>

namespace Ui {
class CNameDlg;
}

class CNameDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CNameDlg(QWidget *parent = 0);
    ~CNameDlg();

private:
    Ui::CNameDlg *ui;
};

#endif // CNAMEDLG_H

#ifndef CMUSICDLG_H
#define CMUSICDLG_H

#include <QDialog>

namespace Ui {
class CMusicDlg;
}

class CMusicDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CMusicDlg(QWidget *parent = 0);
    ~CMusicDlg();

private:
    Ui::CMusicDlg *ui;
};

#endif // CMUSICDLG_H

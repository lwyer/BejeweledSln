#ifndef CMUSICDLG_H
#define CMUSICDLG_H

#include <QDialog>
#include "CNameDlg.h"
#include "CThemeDlg.h"

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
private slots:
    void theme();
    void name();
};

#endif // CMUSICDLG_H

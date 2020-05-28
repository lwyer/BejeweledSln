#ifndef CTHEMEDLG_H
#define CTHEMEDLG_H

#include <QDialog>
#include "CMusicDlg.h"
#include "CNameDlg.h"

namespace Ui {
class CThemeDlg;
}

class CThemeDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CThemeDlg(QWidget *parent = 0);
    ~CThemeDlg();

private:
    Ui::CThemeDlg *ui;
private slots:
    void music();
    void name();
};

#endif // CTHEMEDLG_H

#ifndef CNAMEDLG_H
#define CNAMEDLG_H

#include <QDialog>
#include "CThemeDlg.h"
#include "CMusicDlg.h"
#include <QSettings>

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
private slots:
    void music();
    void theme();
    void newName();
};

#endif // CNAMEDLG_H

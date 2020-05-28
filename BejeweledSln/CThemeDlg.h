#ifndef CTHEMEDLG_H
#define CTHEMEDLG_H

#include <QDialog>

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
};

#endif // CTHEMEDLG_H

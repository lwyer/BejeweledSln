#ifndef CRANKDLG_H
#define CRANKDLG_H

#include <QDialog>

namespace Ui {
class CRankDlg;
}

class CRankDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CRankDlg(QWidget *parent = 0);
    ~CRankDlg();

private:
    Ui::CRankDlg *ui;
};

#endif // CRANKDLG_H

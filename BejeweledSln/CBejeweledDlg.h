#ifndef CBEJEWELEDDLG_H
#define CBEJEWELEDDLG_H

#include <QDialog>
#include "CMusicDlg.h"
#include "CRankDlg.h"

namespace Ui {
class CBejeweledDlg;
}

class CBejeweledDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CBejeweledDlg(QWidget *parent = 0);
    ~CBejeweledDlg();

private:
    Ui::CBejeweledDlg *ui;

private slots:
    void config();
    void start();
    void score();
};

#endif // CBEJEWELEDDLG_H

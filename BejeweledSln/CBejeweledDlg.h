#ifndef CBEJEWELEDDLG_H
#define CBEJEWELEDDLG_H

#include <QDialog>
#include "CMusicDlg.h"
#include "CHelpDlg.h"
#include "CGameDlg.h"

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
    void start();
    void config();
    void score();
    void help();
};

#endif // CBEJEWELEDDLG_H

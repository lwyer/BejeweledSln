#ifndef CTIMEUP_H
#define CTIMEUP_H

#include <QDialog>
#include "CBejeweledDlg.h"

namespace Ui {
class CTimeup;
}

class CTimeup : public QDialog
{
    Q_OBJECT

public:
    explicit CTimeup(int id, QWidget *parent = 0);
    ~CTimeup();

private:
    Ui::CTimeup *ui;
    int id;

private slots:
    void backtohome();
};

#endif // CTIMEUP_H

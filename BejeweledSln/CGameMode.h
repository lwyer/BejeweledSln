#ifndef CGAMEMODE_H
#define CGAMEMODE_H

#include <QDialog>
#include "CGameDlg.h"
#include "CBejeweledDlg.h"

namespace Ui {
class CGameMode;
}

class CGameMode : public QDialog
{
    Q_OBJECT

public:
    explicit CGameMode(QWidget *parent = 0);
    ~CGameMode();

private:
    Ui::CGameMode *ui;

private slots:
    void lightning();
    void back();
};

#endif // CGAMEMODE_H

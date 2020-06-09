#ifndef CGAMEMODE_H
#define CGAMEMODE_H

#include <QDialog>
#include "CGameDlg.h"
#include "CBejeweledDlg.h"
#include "CGameClassic.h"
#include "CGameDlg_2.h"

namespace Ui {
class CGameMode;
}

class CGameMode : public QDialog
{
    Q_OBJECT

public:
    explicit CGameMode(QMediaPlayer* player, QWidget *parent = 0);
    ~CGameMode();

private:
    Ui::CGameMode *ui;
    QMediaPlayer* player;

private slots:
    void lightning();
    void back();
    void classic();
    void jewel2();
};

#endif // CGAMEMODE_H

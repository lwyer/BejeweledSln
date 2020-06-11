#ifndef CGAMEMODE_H
#define CGAMEMODE_H

#include <QDialog>
#include "CGameDlg.h"
#include "CBejeweledDlg.h"
#include "CGameClassic.h"
#include "CGameDlg_2.h"
#include <QTime>
#include "CGameDlg_3.h"

namespace Ui {
class CGameMode;
}

class CGameMode : public QDialog
{
    Q_OBJECT

public:
    explicit CGameMode(int id, QMediaPlayer* player, QWidget *parent = 0);
    ~CGameMode();
    QSound* keypress;
    void sleep(unsigned int msec);
private:
    Ui::CGameMode *ui;
    QMediaPlayer* player;
    int id;

private slots:
    void lightning();
    void back();
    void classic();
    void jewel2();
    void balance();
};

#endif // CGAMEMODE_H

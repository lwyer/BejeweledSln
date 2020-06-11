#ifndef CBEJEWELEDDLG_H
#define CBEJEWELEDDLG_H

#include <QDialog>
#include "CSetDlg.h"
#include "CHelpDlg.h"
#include "CGameMode.h"
#include "CRankDlg.h"
#include <QSettings>
#include <QMediaPlayer>
#include <QSound>

namespace Ui {
class CBejeweledDlg;
}

class CBejeweledDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CBejeweledDlg(int id, QWidget *parent = 0);
    ~CBejeweledDlg();
private:
    Ui::CBejeweledDlg *ui;
    QMediaPlayer* player;
    QSound* keypress;
    QMediaPlayer* welcomeSound;
    QSettings* configIni;
    int id;
private slots:
    void start();
    void config();
    void score();
    void help();
    void homeupdate();
};

#endif // CBEJEWELEDDLG_H

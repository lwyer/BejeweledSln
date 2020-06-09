#ifndef CSETDLG_H
#define CSETDLG_H

#include <QDialog>
#include <QSettings>
#include <QSound>
#include <QDebug>
#include <QFileDialog>
#include <QButtonGroup>
#include <QMediaPlayer>

namespace Ui {
class CSetDlg;
}

class CSetDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CSetDlg(QMediaPlayer* player, QWidget *parent = 0);
    ~CSetDlg();
    QSettings* configini;
    QButtonGroup* musicradio;
    QButtonGroup* themeradio;
    QButtonGroup* styleradio;
    QMediaPlayer* player;

private slots:
    void cancel();
    void save();
    void default1();
    void default2();
    void diy1();
    void diy2();
    void browser1();
    void browser2();
    void valuechange();
private:
    Ui::CSetDlg *ui;
};

#endif // CSETDLG_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CRankDlg.h"
#include "CBejeweledDlg.h"
#include <QMediaPlayer>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QMediaPlayer* player;
    QSettings* configIni;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    CRankDlg *dialog;//声明一个弹窗变量

private slots:
    void login();
    void logon();
};

#endif // MAINWINDOW_H

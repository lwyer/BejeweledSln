#ifndef CGAMEDLG_H
#define CGAMEDLG_H

#include <QMainWindow>

namespace Ui {
class CGameDlg;
}

class CGameDlg : public QMainWindow
{
    Q_OBJECT

public:
    explicit CGameDlg(QWidget *parent = nullptr);
    ~CGameDlg();

    //画背景图
    void paintEvent(QPaintEvent *);
private:
    Ui::CGameDlg *ui;
};

#endif // CGAMEDLG_H

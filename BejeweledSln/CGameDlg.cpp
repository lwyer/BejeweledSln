#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QPainter>

CGameDlg::CGameDlg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CGameDlg)
{
    ui->setupUi(this);

    //配置游戏场景
    setFixedSize(320,588);
    setWindowIcon(QIcon(":/res/red.png"));
    setWindowTitle("BeJeweled");

    //提示按钮
    //connect();
    //退出按钮
    connect(ui->actionQuit,&QAction::trigger,[=](){
        this->close();
    });
}

void CGameDlg::paintEvent(QPaintEvent *){
    //设置背景图
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/background.jpg");
    painter.drawPixmap(0,0,pix.width(),pix.height(),pix);

}

CGameDlg::~CGameDlg()
{
    delete ui;
}

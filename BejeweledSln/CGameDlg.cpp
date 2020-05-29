#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QPainter>
#include "MyPushButton.h"
#include <QLabel>
CGameDlg::CGameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg)
{

    //设置窗口大小
    setFixedSize(700,700);
    setWindowIcon(QIcon(":/res/red.png"));
    setWindowTitle("BeJeweled");

    //提示
    //connect();
    //退出
    connect(ui->actionQuit,&QAction::trigger,[=](){
        this->close();
    });

    //开始按钮
    MyPushButton * startBtn = new MyPushButton(":/res/start.jpg");
    startBtn->setParent(this);
    startBtn->move(450,300);

    connect(startBtn,&MyPushButton::clicked,[=](){
        startBtn->zoom1();
        startBtn->zoom2();
    });

    //暂停按钮
    MyPushButton * pauseBtn = new MyPushButton(":/res/pause.jpg");
    pauseBtn->setParent(this);
    pauseBtn->move(450,200);

    connect(pauseBtn,&MyPushButton::clicked,[=](){
        pauseBtn->zoom1();
        pauseBtn->zoom2();
    });


    //显示宝石背景图
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j<8; j++) {

            QPixmap pixmap = QPixmap(":/res/layer.jpg");
            QLabel *label = new QLabel;
            label->setGeometry(0,0,50,50);
            label->setPixmap(pixmap);
            label->setParent(this);
            label->move(40+i*50,150+j*50);
        }

    }
}
void CGameDlg::paintEvent(QPaintEvent *){
    //设置背景图
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/background.jpg");
    painter.drawPixmap(0,0,700,700,pix);

}

CGameDlg::~CGameDlg()
{
    delete ui;
}

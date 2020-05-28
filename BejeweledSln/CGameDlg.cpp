#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include <QPainter>
#include "MyPushButton.h"
#include <QLabel>
CGameDlg::CGameDlg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CGameDlg)
{
    ui->setupUi(this);

    //配置游戏场景
    setFixedSize(600,600);
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
    startBtn->move(550,300);

    connect(startBtn,&MyPushButton::clicked,[=](){
        startBtn->zoom1();
        startBtn->zoom2();
    });


    //显示宝石背景图
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j<4; j++) {
            //绘制图片
            QPixmap pixmap = QPixmap(":/res/layer.jpg");
            QLabel *label = new QLabel;
            label->setGeometry(0,0,50,50);
            label->setPixmap(pixmap);
            label->setParent(this);
            label->move(60+i*50,100+j*50);
        }

    }
}
void CGameDlg::paintEvent(QPaintEvent *){
    //设置背景图
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/background.jpg");
    painter.drawPixmap(0,0,600,600,pix);

}

CGameDlg::~CGameDlg()
{
    delete ui;
}

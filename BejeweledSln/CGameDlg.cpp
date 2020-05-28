#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include "MyPushButton.h"
#include <QLabel>
#include <QPainter>
CGameDlg::CGameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGameDlg)
{
    ui->setupUi(this);

    //设置窗口大小
    setFixedSize(600,600);
    setWindowIcon(QIcon(":/res/red.png"));
    setWindowTitle("BeJeweled");

    //提示按钮
    //connect();


    //开始按钮
    MyPushButton * startBtn = new MyPushButton(":/res/start.jpg");
    startBtn->setParent(this);
    startBtn->move(550,300);

    connect(startBtn,&MyPushButton::clicked,[=](){
        startBtn->zoom1();
        startBtn->zoom2();
    });


    //宝石底层图片
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j<4; j++) {
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
    //背景图片
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/background.jpg");
    painter.drawPixmap(0,0,600,600,pix);

}

CGameDlg::~CGameDlg()
{
    delete ui;
}

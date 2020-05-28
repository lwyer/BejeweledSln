#include "MyPushButton.h"
#include <QDebug>
#include <QPropertyAnimation>
MyPushButton::MyPushButton(QString normalImg, QString pressImg){

    this->normalImgPath = normalImg;
    this->pressImgPath = pressImg;

    QPixmap pix;
    bool ret = pix.load(normalImg);
    if(!ret)
    {
        qDebug()<<"加载图片失败";
        return;
    }
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");//无边框
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));


}
void MyPushButton:: zoom1(){
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    //时间间隔
    animation->setDuration(200);
    //起始位置
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //结束位置
    animation->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);

    animation->start();

}

void MyPushButton:: zoom2(){
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    //时间间隔
    animation->setDuration(200);
    //起始位置
    animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //结束位置
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);

    animation->start();
}

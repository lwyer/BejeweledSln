#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tishi->hide();

    configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../BejeweledSln/backgroundMusic/intro.mp3"));
    player->setVolume(configIni->value("Music/volume").toInt());
    player->play();
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);

    ui->lineEdit_2->setText(configIni->value("Name/id").toString());
    if(configIni->value("Name/isRemember").toString() == "1")
        ui->lineEdit_3->setText(configIni->value("Name/password").toString());

    connect(ui->login, SIGNAL(clicked()), SLOT(login()));
    connect(ui->logon, SIGNAL(clicked()), SLOT(logon()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//登录按钮
void MainWindow::on_pushButton_clicked()
{
    bool t;
    QString name,str1,password,str3;
    name=ui->lineEdit->text();
    str1=ui->lineEdit_2->text();
    password=ui->lineEdit_3->text();
    str3=ui->lineEdit_4->text();
    int id=str1.toInt();
    DataBase d;
    d.createConnection();
    d.createTable();
    t=d.queryone(id,password);
    if(!t)
    {
        ui->tishi->setText("账号或密码错误");
        ui->tishi->show();
    }else
    {
        this->close();
        player->stop();
        CBejeweledDlg* w = new CBejeweledDlg(id, this);
        w->show();
        w->exec();
    }
    configIni->setValue("Name/id", id);
    if(ui->rempass->isChecked())
        configIni->setValue("Name/isRemember", 1);
    else
        configIni->setValue("Name/isRemember", 0);

}

//注册按钮
void MainWindow::on_pushButton_2_clicked()
{
    bool t;
    QString name,str1,password,str3;
    name=ui->lineEdit->text();
    str1=ui->lineEdit_2->text();
    password=ui->lineEdit_3->text();
    str3=ui->lineEdit_4->text();
    int id=str1.toInt();
    //创建数据库如果已经创建则打开
    DataBase d;
    d.createConnection();
    d.createTable();
    if(password==str3)
    {
    t=d.insert(id,name,password,0);//插入数据,创建时分数默认为0
    if(t)
    {
       ui->tishi->setText("创建用户成功");
       ui->tishi->show();
    }else{
        ui->tishi->setText("该账号已存在");
        ui->tishi->show();
    }
    }else{
        ui->tishi->setText("密码前后不一致");
        ui->tishi->show();

    }


}
//排行榜按钮
void MainWindow::on_pushButton_3_clicked()
{
    dialog=new CRankDlg(this);
    dialog->show();
}

void MainWindow::login()
{
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_4->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton->setEnabled(false);
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
}

void MainWindow::logon()
{
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
}

#include "CSetDlg.h"
#include "ui_CSetDlg.h"
#include <QSound>
#include <QDebug>
#include <QFileDialog>
CSetDlg::CSetDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSetDlg)
{
    ui->setupUi(this);


//    QString path1 = ui->textEdit_3->toHtml();
//    QString path2 = ui->textEdit_2->toHtml();
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->nameEdit->setText(configIni->value("Name/Name").toString());
//    configIni->setValue("Music/BgMusicPath",path);
//    configIni->setValue("Picture/Style","0/1");
//    configIni->setValue("Picture/BgPic",path1);
//    configIni->setValue("Picture/Element","1/2");
//    configIni->setValue("Picture/Mask",path2);

    delete configIni;
}



CSetDlg::~CSetDlg()
{
    delete ui;
}



void CSetDlg::on_checkBox_toggled(bool checked)
{
    QSound * bell = new QSound(":/backgroundMusic/backgroundMusic.wav",this);
    if(ui->radioButton->isChecked() == true){
    if(checked == true){
            bell->play();
         }
    }
}

void CSetDlg::on_pushButton_5_clicked(bool checked)
{
    if(ui->checkBox->isChecked() == true){
        if(ui->radioButton_2->isChecked() == true){

           QString path = QFileDialog::getOpenFileName(this,"打开文件","C:/Users/hdx/Desktop");
           ui->textEdit->setText(path);
           QString Rpath = ui->textEdit->toPlainText();
           QString curPath = QDir::currentPath();
           QString relPath = Rpath.mid(curPath.length()+1);
           qDebug() << Rpath;
           qDebug() << curPath;
           qDebug() << relPath;
           QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
           configIni->setValue("Music/BgMusicPath",relPath);

           QSound * bell1 = new QSound(path);
           bell1->play();
         }
        }
}

void CSetDlg::on_radioButton_3_toggled(bool checked)
{
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    configIni->setValue("Picture/Style","0");
}

void CSetDlg::on_pushButton_4_clicked(bool checked)
{
    QString path = QFileDialog::getOpenFileName(this,"打开文件","C:/Users/hdx/Desktop");
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->textEdit_3->setText(path);
    QString Rpath = ui->textEdit_3->toPlainText();
    QString curPath = QDir::currentPath();
    QString relPath = Rpath.mid(curPath.length()+1);
    configIni->setValue("Picture/BgPic",Rpath);
    configIni->setValue("Picture/Style","1");
}

void CSetDlg::on_radioButton_6_toggled(bool checked)
{
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    configIni->setValue("Picture/Element","1");
}

void CSetDlg::on_radioButton_4_toggled(bool checked)
{
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    configIni->setValue("Picture/Element","2");
}

void CSetDlg::on_pushButton_6_clicked(bool checked)
{
    QString path = QFileDialog::getOpenFileName(this,"打开文件","C:/Users/hdx/Desktop");
    QSettings * configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->textEdit_2->setText(path);
    QString Rpath = ui->textEdit_2->toPlainText();
    QString curPath = QDir::currentPath();
    QString relPath = Rpath.mid(curPath.length()+1);
    configIni->setValue("Picture/Mask",Rpath);
}

void CSetDlg::on_pushButton_2_clicked(bool checked)
{
    this->close();

}

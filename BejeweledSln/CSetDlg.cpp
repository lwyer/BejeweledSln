#include "CSetDlg.h"
#include "ui_CSetDlg.h"

CSetDlg::CSetDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSetDlg)
{
    ui->setupUi(this);
    configini = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->nameEdit->setText(configini->value("Name/Name").toString());
    ui->bgmusicpath->setText(configini->value("Music/BgMusicPath").toString());
    ui->bgpicpath->setText(configini->value("Picture/BgPic").toString());
    musicradio = new QButtonGroup(this);
    themeradio = new QButtonGroup(this);
    styleradio = new QButtonGroup(this);

    musicradio->addButton(ui->default1, 0);
    musicradio->addButton(ui->diy1, 1);
    themeradio->addButton(ui->default2, 0);
    themeradio->addButton(ui->diy2, 1);
    styleradio->addButton(ui->style1, 0);
    styleradio->addButton(ui->style2, 1);


}



CSetDlg::~CSetDlg()
{
 //   delete ui;
}

void CSetDlg::cancel()
{
    this->close();
}

void CSetDlg::save()
{
    switch (musicradio->checkedId())
    {
    case 0: configini->setValue("Music/BgMusicPath", "../BejeweledSln/backgroundMusic/lightning.mp3");break;
    case 1: configini->setValue("Music/BgMusicPath", ui->bgmusicpath->toPlainText());break;
    }
    switch(themeradio->checkedId())
    {
    case 0: configini->setValue("Picture/BgPic", "../BejeweledSln/image/background1.jpg");break;
    case 1: configini->setValue("Picture/BgPic", ui->bgpicpath->toPlainText());break;
    }
    switch (styleradio->checkedId()) {
    case 0: configini->setValue("Picture/Style", 1);break;
    case 1: configini->setValue("Picture/Style", 0);break;
    }
    configini->setValue("Name/Name", ui->nameEdit->toPlainText());

    this->close();
}



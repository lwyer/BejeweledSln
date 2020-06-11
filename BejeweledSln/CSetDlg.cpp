#include "CSetDlg.h"
#include "ui_CSetDlg.h"

CSetDlg::CSetDlg(QMediaPlayer* player, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSetDlg)
{
    this->player = player;

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

    ui->volumechange->setMaximum(100);
    ui->volumechange->setMinimum(0);
    ui->volumechange->setSingleStep(10);
    ui->volumechange->setValue(configini->value("Music/volume").toInt());

    connect(ui->volumechange, SIGNAL(valueChanged(int)), SLOT(valuechange()));
    connect(ui->default1, SIGNAL(clicked()),SLOT(default1()));
    connect(ui->default2, SIGNAL(clicked()),SLOT(default2()));
    connect(ui->diy1, SIGNAL(clicked()),SLOT(diy1()));
    connect(ui->diy2, SIGNAL(clicked()),SLOT(diy2()));

    if(configini->value("Picture/Type").toString() == "1")
    {
        ui->bgpicpath->setEnabled(true);
        ui->browser2->setEnabled(true);
        ui->diy2->setChecked(true);
    }else
    {
        ui->bgpicpath->setEnabled(false);
        ui->browser2->setEnabled(false);
        ui->default2->setChecked(true);
    }
    if(configini->value("Music/Type").toString() == "1")
    {
        ui->bgmusicpath->setEnabled(true);
        ui->browser1->setEnabled(true);
        ui->diy1->setChecked(true);
    }else
    {
        ui->bgmusicpath->setEnabled(false);
        ui->browser1->setEnabled(false);
        ui->default1->setChecked(true);
    }
    if(configini->value("Picture/Style").toString() == "1")
        ui->style2->setChecked(true);
    else
        ui->style1->setChecked(false);
    if(configini->value("Switch/BgMusic").toString() == "1")
        ui->bgmusicswitch->setChecked(true);
    else
        ui->bgmusicswitch->setChecked(false);
    if(configini->value("Switch/Sound").toString() == "1")
        ui->soundswitch->setChecked(true);
    else
        ui->soundswitch->setChecked(false);

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
    case 0: configini->setValue("Music/BgMusicPath", "../BejeweledSln/backgroundMusic/lightning.mp3");
        configini->setValue("Music/Type", 0);break;
    case 1: configini->setValue("Music/BgMusicPath", ui->bgmusicpath->toPlainText());
        configini->setValue("Music/Type", 1);break;
    }
    switch(themeradio->checkedId())
    {
    case 0: configini->setValue("Picture/BgPic", "../BejeweledSln/image/background1.jpg");
        configini->setValue("Picture/Type", 0);break;
    case 1: configini->setValue("Picture/BgPic", ui->bgpicpath->toPlainText());
        configini->setValue("Picture/Type", 1);break;
    }
    switch (styleradio->checkedId()) {
    case 0: configini->setValue("Picture/Style", 0);break;
    case 1: configini->setValue("Picture/Style", 1);break;
    }
    configini->setValue("Name/Name", ui->nameEdit->toPlainText());
    configini->setValue("Music/volume", ui->volumechange->value());

    if(ui->bgmusicswitch->isChecked())
        configini->setValue("Switch/BgMusic", 1);
    else
        configini->setValue("Switch/BgMusic", 0);
    if(ui->soundswitch->isChecked())
        configini->setValue("Switch/Sound", 1);
    else
        configini->setValue("Switch/Sound", 0);


    this->close();
}

void CSetDlg::default1()
{
    ui->bgmusicpath->setEnabled(false);
    ui->browser1->setEnabled(false);
}

void CSetDlg::diy1()
{
    ui->bgmusicpath->setEnabled(true);
    ui->browser1->setEnabled(true);
}
void CSetDlg::default2()
{
    ui->bgpicpath->setEnabled(false);
    ui->browser2->setEnabled(false);
}
void CSetDlg::diy2()
{
    ui->bgpicpath->setEnabled(true);
    ui->browser2->setEnabled(true);
}

void CSetDlg::browser1()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open Music"), "../BejeweledSln/backgroundMusic", tr("Music File(*.mp3)"));
    ui->bgmusicpath->setText(path);
}

void CSetDlg::browser2()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open Image"), "../BejeweledSln/image", tr("Image File(*.jpg)"));
    ui->bgpicpath->setText(path);
}
void CSetDlg::valuechange()
{
    player->setVolume(ui->volumechange->value());
}

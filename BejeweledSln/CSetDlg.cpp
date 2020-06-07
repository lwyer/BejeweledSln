#include "CSetDlg.h"
#include "ui_CSetDlg.h"

CSetDlg::CSetDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSetDlg)
{
    ui->setupUi(this);
    QSettings *configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->nameEdit->setText(configIni->value("Name/Name").toString());
    delete configIni;
}

CSetDlg::~CSetDlg()
{
  //  delete ui;
}

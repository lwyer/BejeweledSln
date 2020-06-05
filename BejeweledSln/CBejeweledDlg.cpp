#include "CBejeweledDlg.h"
#include "ui_cbejeweleddlg.h"

CBejeweledDlg::CBejeweledDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CBejeweledDlg)
{
    ui->setupUi(this);
    QSettings *configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->welcome->setText("Welcome Back! "+configIni->value("Name/Name").toString());
    delete configIni;
}


CBejeweledDlg::~CBejeweledDlg()
{
    delete ui;
}

void CBejeweledDlg::start()
{
    CGameDlg w;
    this->close();
    w.show();
    w.exec();
}

void CBejeweledDlg::config()
{
    CSetDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

void CBejeweledDlg::score()
{
    CRankDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

void CBejeweledDlg::help()
{
    CHelpDlg w;
    w.setWindowModality(Qt::ApplicationModal);
    w.show();
    w.exec();
}

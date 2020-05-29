#include "CNameDlg.h"
#include "ui_CNameDlg.h"
#include <QDebug>

CNameDlg::CNameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CNameDlg)
{
    ui->setupUi(this);
    QSettings *configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    ui->nameEdit->setText(configIni->value("Name/Name").toString());
    delete configIni;
}

CNameDlg::~CNameDlg()
{
    delete ui;
}

void CNameDlg::music()
{
    CMusicDlg w;
    w.show();
    w.exec();
    this->close();
}

void CNameDlg::theme()
{
    CThemeDlg w;
    w.show();
    w.exec();
    this->close();
}

void CNameDlg::newName()
{
    QVariant qv(ui->nameEdit->toPlainText());
    QSettings *configIni = new QSettings("../BejeweledSln/config.ini", QSettings::IniFormat);
    configIni->setValue("Name/Name", qv);
    delete configIni;
    this->close();
    update();
}

#include "CBejeweledDlg.h"
#include "ui_cbejeweleddlg.h"

CBejeweledDlg::CBejeweledDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CBejeweledDlg)
{
    ui->setupUi(this);
}


CBejeweledDlg::~CBejeweledDlg()
{
    delete ui;
}

void CBejeweledDlg::start()
{

}

void CBejeweledDlg::config()
{
    CMusicDlg w;
    w.show();
    w.exec();
}

void CBejeweledDlg::score()
{

}

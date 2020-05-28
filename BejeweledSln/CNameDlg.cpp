#include "CNameDlg.h"
#include "ui_CNameDlg.h"

CNameDlg::CNameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CNameDlg)
{
    ui->setupUi(this);
}

CNameDlg::~CNameDlg()
{
    delete ui;
}

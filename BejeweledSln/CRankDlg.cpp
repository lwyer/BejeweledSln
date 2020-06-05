#include "CRankDlg.h"
#include "ui_CRankDlg.h"

CRankDlg::CRankDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRankDlg)
{
    ui->setupUi(this);
}

CRankDlg::~CRankDlg()
{
    delete ui;
}

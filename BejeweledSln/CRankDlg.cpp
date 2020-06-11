#include "CRankDlg.h"
#include "ui_CRankDlg.h"

CRankDlg::CRankDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRankDlg)
{
    ui->setupUi(this);
    DataBase d;
    QString str;
    d.createConnection();
    d.createTable();
    str=d.sortById();//返回排行情况

    ui->setupUi(this);
    ui->textEdit->setText(str);
}

CRankDlg::~CRankDlg()
{
  //  delete ui;
}

#include "CTimeup.h"
#include "ui_CTimeup.h"

CTimeup::CTimeup(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTimeup)
{
    this->id = id;
    ui->setupUi(this);
}

CTimeup::~CTimeup()
{
    delete ui;
}

void CTimeup::backtohome()
{
    CBejeweledDlg* w = new CBejeweledDlg(id, this);
    this->close();
    w->show();
    w->exec();
}

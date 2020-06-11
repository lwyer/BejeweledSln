#include "CGamePass.h"
#include "ui_CGamePass.h"

CGamePass::CGamePass(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGamePass)
{
    this->id = id;
    ui->setupUi(this);
}

CGamePass::~CGamePass()
{
 //   delete ui;
}

void CGamePass::back()
{
    CBejeweledDlg* w = new CBejeweledDlg(id, this);
    this->close();
    w->show();
    w->exec();
}

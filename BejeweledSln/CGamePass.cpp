#include "CGamePass.h"
#include "ui_CGamePass.h"

CGamePass::CGamePass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CGamePass)
{
    ui->setupUi(this);
}

CGamePass::~CGamePass()
{
 //   delete ui;
}

void CGamePass::back()
{
    CBejeweledDlg w;
    this->close();
    w.show();
    w.exec();
}

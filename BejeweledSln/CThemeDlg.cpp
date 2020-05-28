#include "CThemeDlg.h"
#include "ui_CThemeDlg.h"

CThemeDlg::CThemeDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CThemeDlg)
{
    ui->setupUi(this);
}

CThemeDlg::~CThemeDlg()
{
    delete ui;
}

void CThemeDlg::name()
{

}
void CThemeDlg::music()
{

}

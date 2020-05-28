#include "CMusicDlg.h"
#include "ui_CMusicDlg.h"

CMusicDlg::CMusicDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CMusicDlg)
{
    ui->setupUi(this);
}

CMusicDlg::~CMusicDlg()
{
    delete ui;
}

void CMusicDlg::theme()
{
    CThemeDlg w;
    w.show();
    w.exec();
    this->close();
}

void CMusicDlg::name()
{
    CNameDlg w;
    w.show();
    w.exec();
    this->close();
}

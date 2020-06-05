#include "CMenuDlg.h"
#include "ui_CMenuDlg.h"

CMenuDlg::CMenuDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CMenuDlg)
{
    ui->setupUi(this);
    ui->movie->setScaledContents(true);
    QMovie *movie = new QMovie("../BejeweledSln/image/movie.gif");
    ui->movie->setMovie(movie);
    movie->start();

    ui->rank->setFocusPolicy(Qt::NoFocus);
    ui->continue_2->setFocusPolicy(Qt::NoFocus);
    ui->config->setFocusPolicy(Qt::NoFocus);
    ui->backtohome->setFocusPolicy(Qt::NoFocus);
    ui->quit->setFocusPolicy(Qt::NoFocus);
}

void CMenuDlg::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_B)
    {
       this->close();
       return;
    }

    QWidget::keyPressEvent(ev);
}

void CMenuDlg::keyReleaseEvent(QKeyEvent *ev)
{


    QWidget::keyReleaseEvent(ev);
}

CMenuDlg::~CMenuDlg()
{
    delete ui;
}

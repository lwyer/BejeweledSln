#include "CBejeweledDlg.h"
#include "CGameDlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBejeweledDlg w;
    w.show();
    return a.exec();
}

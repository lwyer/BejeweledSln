#ifndef CGAMEPASS_H
#define CGAMEPASS_H

#include <QDialog>
#include <CBejeweledDlg.h>

namespace Ui {
class CGamePass;
}

class CGamePass : public QDialog
{
    Q_OBJECT

public:
    explicit CGamePass(QWidget *parent = 0);
    ~CGamePass();

private:
    Ui::CGamePass *ui;
private slots:
    void back();
};

#endif // CGAMEPASS_H

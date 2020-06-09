#ifndef CSETDLG_H
#define CSETDLG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class CSetDlg;
}

class CSetDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CSetDlg(QWidget *parent = 0);
    ~CSetDlg();

private slots:
    void on_checkBox_toggled(bool checked);

    void on_pushButton_5_clicked(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_pushButton_4_clicked(bool checked);

    void on_radioButton_6_toggled(bool checked);

    void on_radioButton_4_toggled(bool checked);

    void on_pushButton_6_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

private:
    Ui::CSetDlg *ui;
};

#endif // CSETDLG_H

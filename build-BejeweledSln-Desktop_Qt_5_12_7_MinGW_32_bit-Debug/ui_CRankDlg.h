/********************************************************************************
** Form generated from reading UI file 'CRankDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRANKDLG_H
#define UI_CRANKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_CRankDlg
{
public:
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *CRankDlg)
    {
        if (CRankDlg->objectName().isEmpty())
            CRankDlg->setObjectName(QString::fromUtf8("CRankDlg"));
        CRankDlg->resize(400, 459);
        tableView = new QTableView(CRankDlg);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 110, 281, 291));
        label = new QLabel(CRankDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 50, 71, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(CRankDlg);

        QMetaObject::connectSlotsByName(CRankDlg);
    } // setupUi

    void retranslateUi(QDialog *CRankDlg)
    {
        CRankDlg->setWindowTitle(QApplication::translate("CRankDlg", "Dialog", nullptr));
        label->setText(QApplication::translate("CRankDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRankDlg: public Ui_CRankDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRANKDLG_H

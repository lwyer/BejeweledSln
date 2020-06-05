/********************************************************************************
** Form generated from reading UI file 'CRankDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRANKDLG_H
#define UI_CRANKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            CRankDlg->setObjectName(QStringLiteral("CRankDlg"));
        CRankDlg->resize(400, 459);
        tableView = new QTableView(CRankDlg);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 110, 281, 291));
        label = new QLabel(CRankDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 50, 71, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(CRankDlg);

        QMetaObject::connectSlotsByName(CRankDlg);
    } // setupUi

    void retranslateUi(QDialog *CRankDlg)
    {
        CRankDlg->setWindowTitle(QApplication::translate("CRankDlg", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CRankDlg", "\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRankDlg: public Ui_CRankDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRANKDLG_H

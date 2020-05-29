/********************************************************************************
** Form generated from reading UI file 'CGameDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEDLG_H
#define UI_CGAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg
{
public:

    void setupUi(QDialog *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QStringLiteral("CGameDlg"));
        CGameDlg->resize(400, 300);

        retranslateUi(CGameDlg);

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QDialog *CGameDlg)
    {
        CGameDlg->setWindowTitle(QApplication::translate("CGameDlg", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H

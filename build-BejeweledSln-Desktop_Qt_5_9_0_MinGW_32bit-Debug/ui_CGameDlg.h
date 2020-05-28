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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg
{
public:
    QAction *actionRemind;
    QAction *actionQuit;
    QWidget *centralwidget;

    void setupUi(QMainWindow *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QStringLiteral("CGameDlg"));
        CGameDlg->resize(800, 600);
        actionRemind = new QAction(CGameDlg);
        actionRemind->setObjectName(QStringLiteral("actionRemind"));
        actionQuit = new QAction(CGameDlg);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(CGameDlg);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CGameDlg->setCentralWidget(centralwidget);

        retranslateUi(CGameDlg);

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CGameDlg)
    {
        CGameDlg->setWindowTitle(QApplication::translate("CGameDlg", "MainWindow", Q_NULLPTR));
        actionRemind->setText(QApplication::translate("CGameDlg", "\346\217\220\347\244\272", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("CGameDlg", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H

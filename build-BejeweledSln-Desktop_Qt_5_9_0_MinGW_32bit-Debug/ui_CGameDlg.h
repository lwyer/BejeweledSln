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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg
{
public:
    QAction *actionRemind;
    QAction *actionQuit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QStringLiteral("CGameDlg"));
        CGameDlg->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        CGameDlg->setWindowIcon(icon);
        actionRemind = new QAction(CGameDlg);
        actionRemind->setObjectName(QStringLiteral("actionRemind"));
        actionQuit = new QAction(CGameDlg);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(CGameDlg);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CGameDlg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CGameDlg);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName(QStringLiteral("menumenu"));
        CGameDlg->setMenuBar(menubar);
        statusbar = new QStatusBar(CGameDlg);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CGameDlg->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actionRemind);
        menumenu->addAction(actionQuit);

        retranslateUi(CGameDlg);

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CGameDlg)
    {
        CGameDlg->setWindowTitle(QApplication::translate("CGameDlg", "MainWindow", Q_NULLPTR));
        actionRemind->setText(QApplication::translate("CGameDlg", "\346\217\220\347\244\272", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("CGameDlg", "\351\200\200\345\207\272", Q_NULLPTR));
        menumenu->setTitle(QApplication::translate("CGameDlg", "\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H

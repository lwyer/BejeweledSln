/********************************************************************************
** Form generated from reading UI file 'CGameDlg_2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEDLG_2_H
#define UI_CGAMEDLG_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg_2
{
public:
    QLabel *background;
    QLabel *gamepanel;
    QTextBrowser *scoreshow;
    QProgressBar *scorebar;
    QPushButton *tishi;
    QPushButton *menu;
    QLabel *allcannot;
    QLabel *levelcomplete;
    QTextBrowser *boomcount;
    QPushButton *boom;

    void setupUi(QDialog *CGameDlg_2)
    {
        if (CGameDlg_2->objectName().isEmpty())
            CGameDlg_2->setObjectName(QStringLiteral("CGameDlg_2"));
        CGameDlg_2->resize(720, 480);
        background = new QLabel(CGameDlg_2);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        gamepanel = new QLabel(CGameDlg_2);
        gamepanel->setObjectName(QStringLiteral("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/gamepanel.png);"));
        scoreshow = new QTextBrowser(CGameDlg_2);
        scoreshow->setObjectName(QStringLiteral("scoreshow"));
        scoreshow->setGeometry(QRect(540, 60, 91, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        scorebar = new QProgressBar(CGameDlg_2);
        scorebar->setObjectName(QStringLiteral("scorebar"));
        scorebar->setGeometry(QRect(60, 440, 631, 23));
        scorebar->setValue(24);
        tishi = new QPushButton(CGameDlg_2);
        tishi->setObjectName(QStringLiteral("tishi"));
        tishi->setGeometry(QRect(540, 200, 93, 28));
        menu = new QPushButton(CGameDlg_2);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(540, 330, 93, 28));
        allcannot = new QLabel(CGameDlg_2);
        allcannot->setObjectName(QStringLiteral("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/allcannot.png);"));
        levelcomplete = new QLabel(CGameDlg_2);
        levelcomplete->setObjectName(QStringLiteral("levelcomplete"));
        levelcomplete->setGeometry(QRect(190, 190, 361, 91));
        boomcount = new QTextBrowser(CGameDlg_2);
        boomcount->setObjectName(QStringLiteral("boomcount"));
        boomcount->setGeometry(QRect(470, 260, 71, 41));
        boom = new QPushButton(CGameDlg_2);
        boom->setObjectName(QStringLiteral("boom"));
        boom->setGeometry(QRect(560, 270, 93, 28));

        retranslateUi(CGameDlg_2);
        QObject::connect(menu, SIGNAL(clicked()), CGameDlg_2, SLOT(menu()));
        QObject::connect(boom, SIGNAL(clicked()), CGameDlg_2, SLOT(boom()));
        QObject::connect(tishi, SIGNAL(clicked()), CGameDlg_2, SLOT(tishislot()));

        QMetaObject::connectSlotsByName(CGameDlg_2);
    } // setupUi

    void retranslateUi(QDialog *CGameDlg_2)
    {
        CGameDlg_2->setWindowTitle(QApplication::translate("CGameDlg_2", "Dialog", Q_NULLPTR));
        background->setText(QString());
        gamepanel->setText(QString());
        tishi->setText(QApplication::translate("CGameDlg_2", "\346\217\220\347\244\272", Q_NULLPTR));
        menu->setText(QApplication::translate("CGameDlg_2", "\350\217\234\345\215\225", Q_NULLPTR));
        allcannot->setText(QString());
        levelcomplete->setText(QString());
        boom->setText(QApplication::translate("CGameDlg_2", "\347\210\206\347\202\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameDlg_2: public Ui_CGameDlg_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_2_H

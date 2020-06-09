/********************************************************************************
** Form generated from reading UI file 'CGameDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEDLG_H
#define UI_CGAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg
{
public:
    QLabel *background;
    QLabel *gamepanel;
    QProgressBar *progressBar;
    QPushButton *menu;
    QLabel *pause;
    QTextBrowser *scoreshow;
    QLabel *timeout;
    QLabel *allcannot;
    QPushButton *pauseorcontinue;
    QPushButton *pauseorcontinue_2;
    QLabel *label;

    void setupUi(QDialog *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QString::fromUtf8("CGameDlg"));
        CGameDlg->resize(720, 480);
        background = new QLabel(CGameDlg);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        gamepanel = new QLabel(CGameDlg);
        gamepanel->setObjectName(QString::fromUtf8("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/gamepanel.png);"));
        progressBar = new QProgressBar(CGameDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 440, 631, 23));
        progressBar->setValue(24);
        menu = new QPushButton(CGameDlg);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(530, 340, 93, 28));
        pause = new QLabel(CGameDlg);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(50, 20, 400, 400));
        pause->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/pause.png);"));
        scoreshow = new QTextBrowser(CGameDlg);
        scoreshow->setObjectName(QString::fromUtf8("scoreshow"));
        scoreshow->setGeometry(QRect(530, 60, 91, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        timeout = new QLabel(CGameDlg);
        timeout->setObjectName(QString::fromUtf8("timeout"));
        timeout->setGeometry(QRect(50, 20, 400, 400));
        timeout->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/timeout.png);"));
        allcannot = new QLabel(CGameDlg);
        allcannot->setObjectName(QString::fromUtf8("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/allcannot.png);"));
        pauseorcontinue = new QPushButton(CGameDlg);
        pauseorcontinue->setObjectName(QString::fromUtf8("pauseorcontinue"));
        pauseorcontinue->setGeometry(QRect(530, 260, 93, 28));
        pauseorcontinue_2 = new QPushButton(CGameDlg);
        pauseorcontinue_2->setObjectName(QString::fromUtf8("pauseorcontinue_2"));
        pauseorcontinue_2->setGeometry(QRect(530, 180, 93, 28));
        label = new QLabel(CGameDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 180, 361, 91));

        retranslateUi(CGameDlg);
        QObject::connect(menu, SIGNAL(clicked()), CGameDlg, SLOT(menu()));
        QObject::connect(pauseorcontinue, SIGNAL(clicked()), CGameDlg, SLOT(pauseorcontinue()));

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QDialog *CGameDlg)
    {
        CGameDlg->setWindowTitle(QApplication::translate("CGameDlg", "Bejeweled3", nullptr));
        background->setText(QString());
        gamepanel->setText(QString());
        menu->setText(QApplication::translate("CGameDlg", "\350\217\234\345\215\225", nullptr));
        pause->setText(QString());
        timeout->setText(QString());
        allcannot->setText(QString());
        pauseorcontinue->setText(QApplication::translate("CGameDlg", "\346\232\202\345\201\234", nullptr));
        pauseorcontinue_2->setText(QApplication::translate("CGameDlg", "\346\217\220\347\244\272", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H

/********************************************************************************
** Form generated from reading UI file 'CGameDlg_3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEDLG_3_H
#define UI_CGAMEDLG_3_H

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

class Ui_CGameDlg_3
{
public:
    QLabel *gamepanel;
    QLabel *background;
    QLabel *allcannot;
    QPushButton *menu;
    QTextBrowser *scoreshow;
    QProgressBar *redprogressbar;
    QProgressBar *blueprogressbar;
    QLabel *redlabel;
    QLabel *bluelabel;
    QLabel *levelcomplete;

    void setupUi(QDialog *CGameDlg_3)
    {
        if (CGameDlg_3->objectName().isEmpty())
            CGameDlg_3->setObjectName(QStringLiteral("CGameDlg_3"));
        CGameDlg_3->resize(720, 480);
        gamepanel = new QLabel(CGameDlg_3);
        gamepanel->setObjectName(QStringLiteral("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/gamepanel.png);"));
        background = new QLabel(CGameDlg_3);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        allcannot = new QLabel(CGameDlg_3);
        allcannot->setObjectName(QStringLiteral("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/allcannot.png);"));
        menu = new QPushButton(CGameDlg_3);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(550, 360, 93, 28));
        scoreshow = new QTextBrowser(CGameDlg_3);
        scoreshow->setObjectName(QStringLiteral("scoreshow"));
        scoreshow->setGeometry(QRect(550, 80, 101, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        redprogressbar = new QProgressBar(CGameDlg_3);
        redprogressbar->setObjectName(QStringLiteral("redprogressbar"));
        redprogressbar->setGeometry(QRect(10, 20, 31, 401));
        redprogressbar->setMaximum(1000);
        redprogressbar->setValue(500);
        redprogressbar->setOrientation(Qt::Vertical);
        blueprogressbar = new QProgressBar(CGameDlg_3);
        blueprogressbar->setObjectName(QStringLiteral("blueprogressbar"));
        blueprogressbar->setGeometry(QRect(460, 20, 31, 401));
        blueprogressbar->setMaximum(1000);
        blueprogressbar->setValue(500);
        blueprogressbar->setOrientation(Qt::Vertical);
        redlabel = new QLabel(CGameDlg_3);
        redlabel->setObjectName(QStringLiteral("redlabel"));
        redlabel->setGeometry(QRect(10, 430, 121, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(20);
        redlabel->setFont(font1);
        redlabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        bluelabel = new QLabel(CGameDlg_3);
        bluelabel->setObjectName(QStringLiteral("bluelabel"));
        bluelabel->setGeometry(QRect(410, 430, 121, 31));
        bluelabel->setFont(font1);
        bluelabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        levelcomplete = new QLabel(CGameDlg_3);
        levelcomplete->setObjectName(QStringLiteral("levelcomplete"));
        levelcomplete->setGeometry(QRect(200, 180, 361, 91));
        background->raise();
        gamepanel->raise();
        allcannot->raise();
        menu->raise();
        scoreshow->raise();
        redprogressbar->raise();
        blueprogressbar->raise();
        redlabel->raise();
        bluelabel->raise();
        levelcomplete->raise();

        retranslateUi(CGameDlg_3);
        QObject::connect(menu, SIGNAL(clicked()), CGameDlg_3, SLOT(menu()));

        QMetaObject::connectSlotsByName(CGameDlg_3);
    } // setupUi

    void retranslateUi(QDialog *CGameDlg_3)
    {
        CGameDlg_3->setWindowTitle(QApplication::translate("CGameDlg_3", "Dialog", Q_NULLPTR));
        gamepanel->setText(QString());
        background->setText(QString());
        allcannot->setText(QString());
        menu->setText(QApplication::translate("CGameDlg_3", "\350\217\234\345\215\225", Q_NULLPTR));
        scoreshow->setHtml(QApplication::translate("CGameDlg_3", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe Devanagari'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0/120</p></body></html>", Q_NULLPTR));
        redlabel->setText(QApplication::translate("CGameDlg_3", "Red: ", Q_NULLPTR));
        bluelabel->setText(QApplication::translate("CGameDlg_3", "Blue: ", Q_NULLPTR));
        levelcomplete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CGameDlg_3: public Ui_CGameDlg_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_3_H

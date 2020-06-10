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
    QPushButton *tishi;
    QLabel *label;
    QTextBrowser *boomcount;
    QPushButton *boom;

    void setupUi(QDialog *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QStringLiteral("CGameDlg"));
        CGameDlg->resize(720, 480);
        background = new QLabel(CGameDlg);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        gamepanel = new QLabel(CGameDlg);
        gamepanel->setObjectName(QStringLiteral("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/gamepanel.png);"));
        progressBar = new QProgressBar(CGameDlg);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(50, 440, 631, 23));
        progressBar->setValue(24);
        menu = new QPushButton(CGameDlg);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(530, 370, 93, 28));
        pause = new QLabel(CGameDlg);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(50, 20, 400, 400));
        pause->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/pause.png);"));
        scoreshow = new QTextBrowser(CGameDlg);
        scoreshow->setObjectName(QStringLiteral("scoreshow"));
        scoreshow->setGeometry(QRect(530, 60, 91, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        timeout = new QLabel(CGameDlg);
        timeout->setObjectName(QStringLiteral("timeout"));
        timeout->setGeometry(QRect(50, 20, 400, 400));
        timeout->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/timeout.png);"));
        allcannot = new QLabel(CGameDlg);
        allcannot->setObjectName(QStringLiteral("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/allcannot.png);"));
        pauseorcontinue = new QPushButton(CGameDlg);
        pauseorcontinue->setObjectName(QStringLiteral("pauseorcontinue"));
        pauseorcontinue->setGeometry(QRect(530, 200, 93, 28));
        tishi = new QPushButton(CGameDlg);
        tishi->setObjectName(QStringLiteral("tishi"));
        tishi->setGeometry(QRect(530, 150, 93, 28));
        label = new QLabel(CGameDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 180, 361, 91));
        boomcount = new QTextBrowser(CGameDlg);
        boomcount->setObjectName(QStringLiteral("boomcount"));
        boomcount->setGeometry(QRect(480, 290, 71, 41));
        boom = new QPushButton(CGameDlg);
        boom->setObjectName(QStringLiteral("boom"));
        boom->setGeometry(QRect(570, 300, 93, 28));

        retranslateUi(CGameDlg);
        QObject::connect(menu, SIGNAL(clicked()), CGameDlg, SLOT(menu()));
        QObject::connect(pauseorcontinue, SIGNAL(clicked()), CGameDlg, SLOT(pauseorcontinue()));
        QObject::connect(tishi, SIGNAL(clicked()), CGameDlg, SLOT(tishislot()));
        QObject::connect(boom, SIGNAL(clicked()), CGameDlg, SLOT(boom()));

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QDialog *CGameDlg)
    {
        CGameDlg->setWindowTitle(QApplication::translate("CGameDlg", "Bejeweled3", Q_NULLPTR));
        background->setText(QString());
        gamepanel->setText(QString());
        menu->setText(QApplication::translate("CGameDlg", "\350\217\234\345\215\225", Q_NULLPTR));
        pause->setText(QString());
        timeout->setText(QString());
        allcannot->setText(QString());
        pauseorcontinue->setText(QApplication::translate("CGameDlg", "\346\232\202\345\201\234", Q_NULLPTR));
        tishi->setText(QApplication::translate("CGameDlg", "\346\217\220\347\244\272", Q_NULLPTR));
        label->setText(QString());
        boom->setText(QApplication::translate("CGameDlg", "\347\210\206\347\202\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H

/********************************************************************************
** Form generated from reading UI file 'CGameClassic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMECLASSIC_H
#define UI_CGAMECLASSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CGameClassic
{
public:
    QLabel *background;
    QTextBrowser *scoreshow;
    QProgressBar *scorebar;
    QLabel *gamepanel;
    QPushButton *menu;
    QLabel *allcannot;
    QLabel *pause;
    QPushButton *pauseorcontinue_2;
    QLabel *levelcomplete;

    void setupUi(QDialog *CGameClassic)
    {
        if (CGameClassic->objectName().isEmpty())
            CGameClassic->setObjectName(QString::fromUtf8("CGameClassic"));
        CGameClassic->resize(720, 480);
        background = new QLabel(CGameClassic);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        scoreshow = new QTextBrowser(CGameClassic);
        scoreshow->setObjectName(QString::fromUtf8("scoreshow"));
        scoreshow->setGeometry(QRect(540, 50, 91, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        scorebar = new QProgressBar(CGameClassic);
        scorebar->setObjectName(QString::fromUtf8("scorebar"));
        scorebar->setGeometry(QRect(40, 440, 631, 23));
        scorebar->setValue(24);
        gamepanel = new QLabel(CGameClassic);
        gamepanel->setObjectName(QString::fromUtf8("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/gamepanel.png);"));
        menu = new QPushButton(CGameClassic);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(540, 350, 93, 28));
        allcannot = new QLabel(CGameClassic);
        allcannot->setObjectName(QString::fromUtf8("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/allcannot.png);"));
        pause = new QLabel(CGameClassic);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(50, 20, 400, 400));
        pause->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/pause.png);"));
        pauseorcontinue_2 = new QPushButton(CGameClassic);
        pauseorcontinue_2->setObjectName(QString::fromUtf8("pauseorcontinue_2"));
        pauseorcontinue_2->setGeometry(QRect(540, 190, 93, 28));
        levelcomplete = new QLabel(CGameClassic);
        levelcomplete->setObjectName(QString::fromUtf8("levelcomplete"));
        levelcomplete->setGeometry(QRect(180, 180, 361, 91));

        retranslateUi(CGameClassic);

        QMetaObject::connectSlotsByName(CGameClassic);
    } // setupUi

    void retranslateUi(QDialog *CGameClassic)
    {
        CGameClassic->setWindowTitle(QApplication::translate("CGameClassic", "Dialog", nullptr));
        background->setText(QString());
        gamepanel->setText(QString());
        menu->setText(QApplication::translate("CGameClassic", "\350\217\234\345\215\225", nullptr));
        allcannot->setText(QString());
        pause->setText(QString());
        pauseorcontinue_2->setText(QApplication::translate("CGameClassic", "\346\217\220\347\244\272", nullptr));
        levelcomplete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CGameClassic: public Ui_CGameClassic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMECLASSIC_H

/********************************************************************************
** Form generated from reading UI file 'CGameClassic.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMECLASSIC_H
#define UI_CGAMECLASSIC_H

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

class Ui_CGameClassic
{
public:
    QLabel *background;
    QTextBrowser *scoreshow;
    QProgressBar *scorebar;
    QLabel *gamepanel;
    QPushButton *menu;
    QLabel *allcannot;
    QPushButton *pauseorcontinue_2;
    QLabel *levelcomplete;
    QTextBrowser *boomcount;
    QPushButton *boom;

    void setupUi(QDialog *CGameClassic)
    {
        if (CGameClassic->objectName().isEmpty())
            CGameClassic->setObjectName(QStringLiteral("CGameClassic"));
        CGameClassic->resize(720, 480);
        background = new QLabel(CGameClassic);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        scoreshow = new QTextBrowser(CGameClassic);
        scoreshow->setObjectName(QStringLiteral("scoreshow"));
        scoreshow->setGeometry(QRect(540, 50, 91, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        scoreshow->setFont(font);
        scorebar = new QProgressBar(CGameClassic);
        scorebar->setObjectName(QStringLiteral("scorebar"));
        scorebar->setGeometry(QRect(40, 440, 631, 23));
        scorebar->setValue(24);
        gamepanel = new QLabel(CGameClassic);
        gamepanel->setObjectName(QStringLiteral("gamepanel"));
        gamepanel->setGeometry(QRect(29, 9, 441, 431));
        gamepanel->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/gamepanel.png);"));
        menu = new QPushButton(CGameClassic);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(540, 350, 93, 28));
        allcannot = new QLabel(CGameClassic);
        allcannot->setObjectName(QStringLiteral("allcannot"));
        allcannot->setGeometry(QRect(50, 20, 400, 400));
        allcannot->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/allcannot.png);"));
        pauseorcontinue_2 = new QPushButton(CGameClassic);
        pauseorcontinue_2->setObjectName(QStringLiteral("pauseorcontinue_2"));
        pauseorcontinue_2->setGeometry(QRect(540, 190, 93, 28));
        levelcomplete = new QLabel(CGameClassic);
        levelcomplete->setObjectName(QStringLiteral("levelcomplete"));
        levelcomplete->setGeometry(QRect(180, 180, 361, 91));
        boomcount = new QTextBrowser(CGameClassic);
        boomcount->setObjectName(QStringLiteral("boomcount"));
        boomcount->setGeometry(QRect(470, 270, 71, 41));
        boom = new QPushButton(CGameClassic);
        boom->setObjectName(QStringLiteral("boom"));
        boom->setGeometry(QRect(570, 280, 93, 28));

        retranslateUi(CGameClassic);
        QObject::connect(pauseorcontinue_2, SIGNAL(clicked()), CGameClassic, SLOT(tishislot()));
        QObject::connect(menu, SIGNAL(clicked()), CGameClassic, SLOT(menu()));
        QObject::connect(boom, SIGNAL(clicked()), CGameClassic, SLOT(boom()));

        QMetaObject::connectSlotsByName(CGameClassic);
    } // setupUi

    void retranslateUi(QDialog *CGameClassic)
    {
        CGameClassic->setWindowTitle(QApplication::translate("CGameClassic", "Dialog", Q_NULLPTR));
        background->setText(QString());
        gamepanel->setText(QString());
        menu->setText(QApplication::translate("CGameClassic", "\350\217\234\345\215\225", Q_NULLPTR));
        allcannot->setText(QString());
        pauseorcontinue_2->setText(QApplication::translate("CGameClassic", "\346\217\220\347\244\272", Q_NULLPTR));
        levelcomplete->setText(QString());
        boom->setText(QApplication::translate("CGameClassic", "\347\210\206\347\202\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameClassic: public Ui_CGameClassic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMECLASSIC_H

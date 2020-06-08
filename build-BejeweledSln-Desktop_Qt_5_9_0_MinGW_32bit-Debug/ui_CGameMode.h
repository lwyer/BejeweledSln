/********************************************************************************
** Form generated from reading UI file 'CGameMode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEMODE_H
#define UI_CGAMEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CGameMode
{
public:
    QLabel *label;
    QLabel *classic;
    QLabel *label_2;
    QLabel *classic_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *lightning;
    QPushButton *pushButton_2;
    QLabel *classic_3;
    QLabel *label_4;
    QPushButton *jewel2;

    void setupUi(QDialog *CGameMode)
    {
        if (CGameMode->objectName().isEmpty())
            CGameMode->setObjectName(QStringLiteral("CGameMode"));
        CGameMode->resize(929, 649);
        label = new QLabel(CGameMode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 929, 649));
        label->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/timg.jpg);"));
        classic = new QLabel(CGameMode);
        classic->setObjectName(QStringLiteral("classic"));
        classic->setGeometry(QRect(160, 60, 201, 191));
        classic->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/config.png);"));
        label_2 = new QLabel(CGameMode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 260, 211, 71));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setWordWrap(true);
        classic_2 = new QLabel(CGameMode);
        classic_2->setObjectName(QStringLiteral("classic_2"));
        classic_2->setGeometry(QRect(170, 360, 201, 191));
        classic_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/config.png);"));
        pushButton = new QPushButton(CGameMode);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 110, 121, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        label_3 = new QLabel(CGameMode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 560, 211, 81));
        label_3->setFont(font);
        label_3->setWordWrap(true);
        lightning = new QPushButton(CGameMode);
        lightning->setObjectName(QStringLiteral("lightning"));
        lightning->setGeometry(QRect(210, 410, 121, 71));
        lightning->setFont(font1);
        pushButton_2 = new QPushButton(CGameMode);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 590, 121, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Devanagari"));
        font2.setPointSize(12);
        pushButton_2->setFont(font2);
        classic_3 = new QLabel(CGameMode);
        classic_3->setObjectName(QStringLiteral("classic_3"));
        classic_3->setGeometry(QRect(540, 360, 201, 191));
        classic_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/config.png);"));
        label_4 = new QLabel(CGameMode);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 550, 211, 81));
        label_4->setFont(font);
        label_4->setWordWrap(true);
        jewel2 = new QPushButton(CGameMode);
        jewel2->setObjectName(QStringLiteral("jewel2"));
        jewel2->setGeometry(QRect(580, 410, 121, 71));
        jewel2->setFont(font1);

        retranslateUi(CGameMode);
        QObject::connect(lightning, SIGNAL(clicked()), CGameMode, SLOT(lightning()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CGameMode, SLOT(back()));
        QObject::connect(pushButton, SIGNAL(clicked()), CGameMode, SLOT(classic()));
        QObject::connect(jewel2, SIGNAL(clicked()), CGameMode, SLOT(jewel2()));

        QMetaObject::connectSlotsByName(CGameMode);
    } // setupUi

    void retranslateUi(QDialog *CGameMode)
    {
        CGameMode->setWindowTitle(QApplication::translate("CGameMode", "Dialog", Q_NULLPTR));
        label->setText(QString());
        classic->setText(QString());
        label_2->setText(QApplication::translate("CGameMode", "\347\273\217\345\205\270\346\250\241\345\274\217\357\274\232\350\256\241\345\210\206\351\227\257\345\205\263\357\274\214\351\200\202\345\220\210\345\217\252\347\210\261\346\200\235\350\200\203\347\232\204\344\275\240", Q_NULLPTR));
        classic_2->setText(QString());
        pushButton->setText(QApplication::translate("CGameMode", "\347\273\217\345\205\270", Q_NULLPTR));
        label_3->setText(QApplication::translate("CGameMode", "\351\227\252\347\224\265\346\250\241\345\274\217\357\274\232\350\256\241\346\227\266\346\266\210\345\235\227\357\274\214\346\211\223\345\207\272\345\261\236\344\272\216\344\275\240\347\232\204\351\200\237\345\272\246", Q_NULLPTR));
        lightning->setText(QApplication::translate("CGameMode", "\351\227\252\347\224\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CGameMode", "\351\200\200\345\233\236", Q_NULLPTR));
        classic_3->setText(QString());
        label_4->setText(QApplication::translate("CGameMode", "\345\256\235\347\237\263\350\277\267\351\230\2652\357\274\232\345\205\250\346\226\260\347\216\251\346\263\225\357\274\214\346\233\264\345\244\247\346\214\221\346\210\230\357\274\201", Q_NULLPTR));
        jewel2->setText(QApplication::translate("CGameMode", "\345\256\235\347\237\2632", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGameMode: public Ui_CGameMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEMODE_H

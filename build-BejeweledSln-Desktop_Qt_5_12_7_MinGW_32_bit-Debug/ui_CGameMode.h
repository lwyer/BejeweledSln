/********************************************************************************
** Form generated from reading UI file 'CGameMode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEMODE_H
#define UI_CGAMEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

    void setupUi(QDialog *CGameMode)
    {
        if (CGameMode->objectName().isEmpty())
            CGameMode->setObjectName(QString::fromUtf8("CGameMode"));
        CGameMode->resize(929, 649);
        label = new QLabel(CGameMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 929, 649));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/timg.jpg);"));
        classic = new QLabel(CGameMode);
        classic->setObjectName(QString::fromUtf8("classic"));
        classic->setGeometry(QRect(160, 60, 201, 191));
        classic->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/config.png);"));
        label_2 = new QLabel(CGameMode);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 260, 211, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setWordWrap(true);
        classic_2 = new QLabel(CGameMode);
        classic_2->setObjectName(QString::fromUtf8("classic_2"));
        classic_2->setGeometry(QRect(170, 360, 201, 191));
        classic_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/config.png);"));
        pushButton = new QPushButton(CGameMode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 110, 121, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        label_3 = new QLabel(CGameMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 560, 211, 81));
        label_3->setFont(font);
        label_3->setWordWrap(true);
        lightning = new QPushButton(CGameMode);
        lightning->setObjectName(QString::fromUtf8("lightning"));
        lightning->setGeometry(QRect(210, 410, 121, 71));
        lightning->setFont(font1);
        pushButton_2 = new QPushButton(CGameMode);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 590, 121, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font2.setPointSize(12);
        pushButton_2->setFont(font2);

        retranslateUi(CGameMode);
        QObject::connect(lightning, SIGNAL(clicked()), CGameMode, SLOT(lightning()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CGameMode, SLOT(back()));
        QObject::connect(pushButton, SIGNAL(clicked()), CGameMode, SLOT(classic()));

        QMetaObject::connectSlotsByName(CGameMode);
    } // setupUi

    void retranslateUi(QDialog *CGameMode)
    {
        CGameMode->setWindowTitle(QApplication::translate("CGameMode", "Dialog", nullptr));
        label->setText(QString());
        classic->setText(QString());
        label_2->setText(QApplication::translate("CGameMode", "\347\273\217\345\205\270\346\250\241\345\274\217\357\274\232\350\256\241\345\210\206\351\227\257\345\205\263\357\274\214\351\200\202\345\220\210\345\217\252\347\210\261\346\200\235\350\200\203\347\232\204\344\275\240", nullptr));
        classic_2->setText(QString());
        pushButton->setText(QApplication::translate("CGameMode", "\347\273\217\345\205\270", nullptr));
        label_3->setText(QApplication::translate("CGameMode", "\351\227\252\347\224\265\346\250\241\345\274\217\357\274\232\350\256\241\346\227\266\346\266\210\345\235\227\357\274\214\346\211\223\345\207\272\345\261\236\344\272\216\344\275\240\347\232\204\351\200\237\345\272\246", nullptr));
        lightning->setText(QApplication::translate("CGameMode", "\351\227\252\347\224\265", nullptr));
        pushButton_2->setText(QApplication::translate("CGameMode", "\351\200\200\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CGameMode: public Ui_CGameMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEMODE_H

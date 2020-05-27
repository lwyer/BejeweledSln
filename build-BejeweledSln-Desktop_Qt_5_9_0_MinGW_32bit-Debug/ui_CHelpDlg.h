/********************************************************************************
** Form generated from reading UI file 'CHelpDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHELPDLG_H
#define UI_CHELPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CHelpDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *CHelpDlg)
    {
        if (CHelpDlg->objectName().isEmpty())
            CHelpDlg->setObjectName(QStringLiteral("CHelpDlg"));
        CHelpDlg->resize(400, 467);
        CHelpDlg->setStyleSheet(QStringLiteral(""));
        label = new QLabel(CHelpDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 467));
        label->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/HelpDlg.png);"));
        label_2 = new QLabel(CHelpDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 85, 0);"));
        label_3 = new QLabel(CHelpDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 72, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(193, 0, 193);"));
        label_4 = new QLabel(CHelpDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 80, 351, 61));
        label_4->setFont(font1);
        label_4->setWordWrap(true);
        label_5 = new QLabel(CHelpDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 72, 15));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(193, 0, 193);"));
        label_6 = new QLabel(CHelpDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 170, 351, 121));
        label_6->setFont(font1);
        label_6->setWordWrap(true);
        label_7 = new QLabel(CHelpDlg);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 300, 72, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: rgb(193, 0, 193);"));
        label_8 = new QLabel(CHelpDlg);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 320, 351, 101));
        label_8->setFont(font1);
        label_8->setWordWrap(true);

        retranslateUi(CHelpDlg);

        QMetaObject::connectSlotsByName(CHelpDlg);
    } // setupUi

    void retranslateUi(QDialog *CHelpDlg)
    {
        CHelpDlg->setWindowTitle(QApplication::translate("CHelpDlg", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("CHelpDlg", "\346\270\270\346\210\217\350\247\204\345\210\231", Q_NULLPTR));
        label_3->setText(QApplication::translate("CHelpDlg", "1.\344\272\222\346\215\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("CHelpDlg", "\347\216\251\345\256\266\351\200\211\344\270\255\347\233\270\351\202\273\357\274\210\346\250\252\343\200\201\347\253\226\357\274\211\347\232\204\344\270\244\344\270\252\345\256\235\347\237\263\344\275\215\347\275\256\345\217\221\347\224\237\344\272\222\346\215\242\357\274\214\345\246\202\346\236\234\344\272\222\346\215\242\346\210\220\345\212\237\345\210\231\346\266\210\345\216\273\345\256\235\347\237\263\357\274\214\345\220\246\345\210\231\345\217\226\346\266\210\344\275\215\347\275\256\344\272\222\346\215\242\343\200\202", Q_NULLPTR));
        label_5->setText(QApplication::translate("CHelpDlg", "2.\346\266\210\345\216\273", Q_NULLPTR));
        label_6->setText(QApplication::translate("CHelpDlg", "\347\216\251\345\256\266\351\200\211\346\213\251\344\270\244\344\270\252\345\256\235\347\237\263\350\277\233\350\241\214\344\275\215\347\275\256\344\272\222\346\215\242\357\274\214\344\272\222\346\215\242\345\220\216\345\246\202\346\236\234\346\250\252\346\216\222\346\210\226\347\253\226\346\216\222\347\232\204\346\234\2113\344\270\252\346\210\2263\344\270\252\344\273\245\344\270\212\347\232\204\347\233\270\345\220\214\345\256\235\347\237\263\357\274\214\345\210\231\346\266\210\345\216\273\350\277\231\345\207\240\344\270\252\347\233\270\345\220\214\345\256\235\347\237\263\357\274\214\345\246\202\346\236\234\344\272\222\346\215\242\345\220\216\346\262\241\346\234\211\345\217\257\344\273\245\346\266\210\345\216\273\347\232\204\345\256\235\347\237\263\357\274\214\345\210\231\351\200\211\344\270\255\347\232\204\344\270\244\344\270\252\345\256\235\347\237\263\346\215\242\345\233\236\345\216\237\346\235\245\347\232\204\344\275\215\347\275\256\343\200\202\346\266\210\345\216\273\345\220\216\347\232\204\347\251\272\346"
                        "\240\274\347\224\261\344\270\212\351\235\242\347\232\204\345\256\235\347\237\263\346\216\211\344\270\213\346\235\245\350\241\245\351\275\220\343\200\202", Q_NULLPTR));
        label_7->setText(QApplication::translate("CHelpDlg", "3.\350\277\236\351\224\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("CHelpDlg", "\347\216\251\345\256\266\346\266\210\345\216\273\345\256\235\347\237\263\345\220\216\357\274\214\344\270\212\351\235\242\347\232\204\345\256\235\347\237\263\346\216\211\344\270\213\346\235\245\350\241\245\345\205\205\347\251\272\346\240\274\357\274\214\345\246\202\346\236\234\350\277\231\346\227\266\346\270\270\346\210\217\346\261\240\344\270\255\346\234\211\350\277\236\347\273\255\346\222\255\346\224\276\357\274\210\346\250\252\357\274\214\347\253\226\357\274\211\347\232\2043\344\270\252\346\210\2263\344\270\252\344\273\245\344\270\212\347\232\204\347\233\270\345\220\214\345\256\235\347\237\263\357\274\214\345\210\231\345\217\257\344\273\245\346\266\210\345\216\273\350\277\231\344\272\233\345\256\235\347\237\263\357\274\214\350\277\231\345\260\261\346\230\257\344\270\200\346\254\241\350\277\236\351\224\201\343\200\202\347\251\272\346\240\274\350\242\253\346\226\260\347\232\204\345\256\235\347\237\263\345\241\253\345\205\205\357\274\214\345\217\210\345\217\257\344\273\245\350\277\233\350\241\214\344\270\213\344"
                        "\270\200\346\254\241\350\277\236\351\224\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CHelpDlg: public Ui_CHelpDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHELPDLG_H

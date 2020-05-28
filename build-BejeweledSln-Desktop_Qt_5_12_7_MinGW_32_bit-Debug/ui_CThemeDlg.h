/********************************************************************************
** Form generated from reading UI file 'CThemeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTHEMEDLG_H
#define UI_CTHEMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CThemeDlg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_5;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *CThemeDlg)
    {
        if (CThemeDlg->objectName().isEmpty())
            CThemeDlg->setObjectName(QString::fromUtf8("CThemeDlg"));
        CThemeDlg->resize(400, 373);
        pushButton = new QPushButton(CThemeDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 93, 28));
        pushButton_2 = new QPushButton(CThemeDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(120, 30, 93, 28));
        pushButton_3 = new QPushButton(CThemeDlg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(210, 30, 93, 28));
        radioButton = new QRadioButton(CThemeDlg);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(70, 100, 61, 19));
        radioButton_2 = new QRadioButton(CThemeDlg);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 100, 81, 19));
        label = new QLabel(CThemeDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 72, 15));
        textEdit = new QTextEdit(CThemeDlg);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 140, 161, 31));
        pushButton_4 = new QPushButton(CThemeDlg);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 140, 71, 28));
        label_2 = new QLabel(CThemeDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 190, 72, 15));
        radioButton_3 = new QRadioButton(CThemeDlg);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(130, 190, 71, 19));
        radioButton_4 = new QRadioButton(CThemeDlg);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(230, 190, 71, 19));
        label_3 = new QLabel(CThemeDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 230, 72, 15));
        textEdit_2 = new QTextEdit(CThemeDlg);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(130, 220, 161, 31));
        pushButton_5 = new QPushButton(CThemeDlg);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 220, 71, 28));
        save = new QPushButton(CThemeDlg);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(80, 300, 93, 28));
        cancel = new QPushButton(CThemeDlg);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(220, 300, 93, 28));

        retranslateUi(CThemeDlg);

        QMetaObject::connectSlotsByName(CThemeDlg);
    } // setupUi

    void retranslateUi(QDialog *CThemeDlg)
    {
        CThemeDlg->setWindowTitle(QApplication::translate("CThemeDlg", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("CThemeDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("CThemeDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("CThemeDlg", "\345\247\223\345\220\215\350\256\276\347\275\256", nullptr));
        radioButton->setText(QApplication::translate("CThemeDlg", "\351\273\230\350\256\244", nullptr));
        radioButton_2->setText(QApplication::translate("CThemeDlg", "\350\207\252\345\256\232\344\271\211", nullptr));
        label->setText(QApplication::translate("CThemeDlg", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        pushButton_4->setText(QApplication::translate("CThemeDlg", "\346\265\217\350\247\210...", nullptr));
        label_2->setText(QApplication::translate("CThemeDlg", "\345\256\235\347\237\263\345\233\276\347\211\207", nullptr));
        radioButton_3->setText(QApplication::translate("CThemeDlg", "\351\243\216\346\240\2741", nullptr));
        radioButton_4->setText(QApplication::translate("CThemeDlg", "\351\243\216\346\240\2742", nullptr));
        label_3->setText(QApplication::translate("CThemeDlg", "\346\232\202\345\201\234\345\233\276\347\211\207", nullptr));
        pushButton_5->setText(QApplication::translate("CThemeDlg", "\346\265\217\350\247\210...", nullptr));
        save->setText(QApplication::translate("CThemeDlg", "\344\277\235\345\255\230", nullptr));
        cancel->setText(QApplication::translate("CThemeDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CThemeDlg: public Ui_CThemeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTHEMEDLG_H

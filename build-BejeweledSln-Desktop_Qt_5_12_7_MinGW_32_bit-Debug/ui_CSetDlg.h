/********************************************************************************
** Form generated from reading UI file 'CSetDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSETDLG_H
#define UI_CSETDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSetDlg
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;
    QRadioButton *radioButton;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_6;
    QRadioButton *radioButton_5;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QRadioButton *radioButton_6;
    QWidget *tab_3;
    QTextEdit *nameEdit;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CSetDlg)
    {
        if (CSetDlg->objectName().isEmpty())
            CSetDlg->setObjectName(QString::fromUtf8("CSetDlg"));
        CSetDlg->resize(411, 376);
        tabWidget = new QTabWidget(CSetDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 391, 301));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 140, 81, 19));
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(70, 80, 91, 19));
        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(190, 80, 91, 19));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 72, 15));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(100, 140, 71, 19));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 170, 241, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 111, 16));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 170, 71, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 72, 15));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(120, 170, 161, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 180, 72, 15));
        radioButton_3 = new QRadioButton(tab_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(60, 50, 61, 19));
        radioButton_4 = new QRadioButton(tab_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(220, 140, 71, 19));
        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(120, 90, 161, 31));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 170, 71, 28));
        radioButton_5 = new QRadioButton(tab_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(180, 50, 81, 19));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 100, 72, 15));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 90, 71, 28));
        radioButton_6 = new QRadioButton(tab_2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(120, 140, 71, 19));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        nameEdit = new QTextEdit(tab_3);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(20, 130, 351, 31));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 80, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label_6->setFont(font);
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(CSetDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 330, 93, 28));
        pushButton_2 = new QPushButton(CSetDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 330, 93, 28));

        retranslateUi(CSetDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSetDlg);
    } // setupUi

    void retranslateUi(QDialog *CSetDlg)
    {
        CSetDlg->setWindowTitle(QApplication::translate("CSetDlg", "Dialog", nullptr));
        radioButton_2->setText(QApplication::translate("CSetDlg", "\350\207\252\345\256\232\344\271\211", nullptr));
        checkBox->setText(QApplication::translate("CSetDlg", "\350\203\214\346\231\257\351\237\263\344\271\220", nullptr));
        checkBox_2->setText(QApplication::translate("CSetDlg", "\351\237\263\346\225\210", nullptr));
        label->setText(QApplication::translate("CSetDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", nullptr));
        radioButton->setText(QApplication::translate("CSetDlg", "\351\273\230\350\256\244", nullptr));
        label_2->setText(QApplication::translate("CSetDlg", "\350\203\214\346\231\257\351\237\263\344\271\220\350\256\276\347\275\256", nullptr));
        pushButton_5->setText(QApplication::translate("CSetDlg", "\346\265\217\350\247\210...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CSetDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("CSetDlg", "\345\256\235\347\237\263\345\233\276\347\211\207", nullptr));
        label_4->setText(QApplication::translate("CSetDlg", "\346\232\202\345\201\234\345\233\276\347\211\207", nullptr));
        radioButton_3->setText(QApplication::translate("CSetDlg", "\351\273\230\350\256\244", nullptr));
        radioButton_4->setText(QApplication::translate("CSetDlg", "\351\243\216\346\240\2742", nullptr));
        pushButton_6->setText(QApplication::translate("CSetDlg", "\346\265\217\350\247\210...", nullptr));
        radioButton_5->setText(QApplication::translate("CSetDlg", "\350\207\252\345\256\232\344\271\211", nullptr));
        label_5->setText(QApplication::translate("CSetDlg", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        pushButton_4->setText(QApplication::translate("CSetDlg", "\346\265\217\350\247\210...", nullptr));
        radioButton_6->setText(QApplication::translate("CSetDlg", "\351\243\216\346\240\2741", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CSetDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        label_6->setText(QApplication::translate("CSetDlg", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\270\270\346\210\217\346\230\265\347\247\260\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CSetDlg", "\345\247\223\345\220\215\350\256\276\347\275\256", nullptr));
        pushButton->setText(QApplication::translate("CSetDlg", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("CSetDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CSetDlg: public Ui_CSetDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSETDLG_H

/********************************************************************************
** Form generated from reading UI file 'CMusicDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMUSICDLG_H
#define UI_CMUSICDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CMusicDlg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *CMusicDlg)
    {
        if (CMusicDlg->objectName().isEmpty())
            CMusicDlg->setObjectName(QStringLiteral("CMusicDlg"));
        CMusicDlg->resize(400, 331);
        pushButton = new QPushButton(CMusicDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(30, 30, 93, 28));
        pushButton_2 = new QPushButton(CMusicDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 30, 93, 28));
        pushButton_3 = new QPushButton(CMusicDlg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(210, 30, 93, 28));
        label = new QLabel(CMusicDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 72, 15));
        checkBox = new QCheckBox(CMusicDlg);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(80, 120, 91, 19));
        checkBox_2 = new QCheckBox(CMusicDlg);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(200, 120, 91, 19));
        label_2 = new QLabel(CMusicDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 150, 111, 16));
        radioButton = new QRadioButton(CMusicDlg);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(110, 180, 71, 19));
        radioButton_2 = new QRadioButton(CMusicDlg);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(200, 180, 81, 19));
        textEdit = new QTextEdit(CMusicDlg);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 210, 241, 31));
        pushButton_5 = new QPushButton(CMusicDlg);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 210, 71, 28));
        save = new QPushButton(CMusicDlg);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(80, 270, 93, 28));
        cancel = new QPushButton(CMusicDlg);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(230, 270, 93, 28));

        retranslateUi(CMusicDlg);
        QObject::connect(pushButton_2, SIGNAL(clicked()), CMusicDlg, SLOT(theme()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), CMusicDlg, SLOT(name()));

        QMetaObject::connectSlotsByName(CMusicDlg);
    } // setupUi

    void retranslateUi(QDialog *CMusicDlg)
    {
        CMusicDlg->setWindowTitle(QApplication::translate("CMusicDlg", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CMusicDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CMusicDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CMusicDlg", "\345\247\223\345\220\215\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("CMusicDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CMusicDlg", "\350\203\214\346\231\257\351\237\263\344\271\220", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("CMusicDlg", "\351\237\263\346\225\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("CMusicDlg", "\350\203\214\346\231\257\351\237\263\344\271\220\350\256\276\347\275\256", Q_NULLPTR));
        radioButton->setText(QApplication::translate("CMusicDlg", "\351\273\230\350\256\244", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("CMusicDlg", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("CMusicDlg", "\346\265\217\350\247\210...", Q_NULLPTR));
        save->setText(QApplication::translate("CMusicDlg", "\344\277\235\345\255\230", Q_NULLPTR));
        cancel->setText(QApplication::translate("CMusicDlg", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMusicDlg: public Ui_CMusicDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMUSICDLG_H

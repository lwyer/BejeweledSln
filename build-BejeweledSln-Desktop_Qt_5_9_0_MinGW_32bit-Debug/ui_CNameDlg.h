/********************************************************************************
** Form generated from reading UI file 'CNameDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNAMEDLG_H
#define UI_CNAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CNameDlg
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QTextEdit *nameEdit;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *CNameDlg)
    {
        if (CNameDlg->objectName().isEmpty())
            CNameDlg->setObjectName(QStringLiteral("CNameDlg"));
        CNameDlg->resize(456, 265);
        pushButton = new QPushButton(CNameDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 93, 28));
        pushButton_2 = new QPushButton(CNameDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 30, 93, 28));
        pushButton_3 = new QPushButton(CNameDlg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(210, 30, 93, 28));
        label = new QLabel(CNameDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);
        nameEdit = new QTextEdit(CNameDlg);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(30, 130, 351, 31));
        save = new QPushButton(CNameDlg);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(90, 200, 93, 28));
        cancel = new QPushButton(CNameDlg);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(230, 200, 93, 28));

        retranslateUi(CNameDlg);

        QMetaObject::connectSlotsByName(CNameDlg);
    } // setupUi

    void retranslateUi(QDialog *CNameDlg)
    {
        CNameDlg->setWindowTitle(QApplication::translate("CNameDlg", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CNameDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CNameDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CNameDlg", "\345\247\223\345\220\215\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("CNameDlg", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\270\270\346\210\217\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        save->setText(QApplication::translate("CNameDlg", "\344\277\235\345\255\230", Q_NULLPTR));
        cancel->setText(QApplication::translate("CNameDlg", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CNameDlg: public Ui_CNameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNAMEDLG_H

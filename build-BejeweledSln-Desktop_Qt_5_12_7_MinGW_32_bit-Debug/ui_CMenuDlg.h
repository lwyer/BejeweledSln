/********************************************************************************
** Form generated from reading UI file 'CMenuDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUDLG_H
#define UI_CMENUDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CMenuDlg
{
public:
    QPushButton *rank;
    QPushButton *continue_2;
    QPushButton *backtohome;
    QPushButton *quit;
    QPushButton *config;
    QLabel *label;
    QLabel *movie;

    void setupUi(QDialog *CMenuDlg)
    {
        if (CMenuDlg->objectName().isEmpty())
            CMenuDlg->setObjectName(QString::fromUtf8("CMenuDlg"));
        CMenuDlg->resize(278, 442);
        rank = new QPushButton(CMenuDlg);
        rank->setObjectName(QString::fromUtf8("rank"));
        rank->setGeometry(QRect(90, 290, 93, 28));
        continue_2 = new QPushButton(CMenuDlg);
        continue_2->setObjectName(QString::fromUtf8("continue_2"));
        continue_2->setGeometry(QRect(90, 210, 93, 28));
        backtohome = new QPushButton(CMenuDlg);
        backtohome->setObjectName(QString::fromUtf8("backtohome"));
        backtohome->setGeometry(QRect(90, 330, 93, 28));
        quit = new QPushButton(CMenuDlg);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(90, 370, 93, 28));
        config = new QPushButton(CMenuDlg);
        config->setObjectName(QString::fromUtf8("config"));
        config->setGeometry(QRect(90, 250, 93, 28));
        label = new QLabel(CMenuDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 61, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(18);
        label->setFont(font);
        movie = new QLabel(CMenuDlg);
        movie->setObjectName(QString::fromUtf8("movie"));
        movie->setGeometry(QRect(70, 50, 140, 140));

        retranslateUi(CMenuDlg);

        QMetaObject::connectSlotsByName(CMenuDlg);
    } // setupUi

    void retranslateUi(QDialog *CMenuDlg)
    {
        CMenuDlg->setWindowTitle(QApplication::translate("CMenuDlg", "Dialog", nullptr));
        rank->setText(QApplication::translate("CMenuDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
        continue_2->setText(QApplication::translate("CMenuDlg", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        backtohome->setText(QApplication::translate("CMenuDlg", "\351\200\200\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        quit->setText(QApplication::translate("CMenuDlg", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        config->setText(QApplication::translate("CMenuDlg", "\346\270\270\346\210\217\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("CMenuDlg", "\350\217\234\345\215\225", nullptr));
        movie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMenuDlg: public Ui_CMenuDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUDLG_H

/********************************************************************************
** Form generated from reading UI file 'CMenuDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMENUDLG_H
#define UI_CMENUDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CMenuDlg
{
public:
    QPushButton *rank;
    QPushButton *continue_2;
    QPushButton *backtohome;
    QLabel *label;
    QLabel *movie;

    void setupUi(QDialog *CMenuDlg)
    {
        if (CMenuDlg->objectName().isEmpty())
            CMenuDlg->setObjectName(QStringLiteral("CMenuDlg"));
        CMenuDlg->resize(278, 442);
        rank = new QPushButton(CMenuDlg);
        rank->setObjectName(QStringLiteral("rank"));
        rank->setGeometry(QRect(90, 260, 93, 28));
        continue_2 = new QPushButton(CMenuDlg);
        continue_2->setObjectName(QStringLiteral("continue_2"));
        continue_2->setGeometry(QRect(90, 220, 93, 28));
        backtohome = new QPushButton(CMenuDlg);
        backtohome->setObjectName(QStringLiteral("backtohome"));
        backtohome->setGeometry(QRect(90, 300, 93, 28));
        label = new QLabel(CMenuDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 61, 41));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(18);
        label->setFont(font);
        movie = new QLabel(CMenuDlg);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setGeometry(QRect(70, 50, 140, 140));

        retranslateUi(CMenuDlg);
        QObject::connect(continue_2, SIGNAL(clicked()), CMenuDlg, SLOT(backtogame()));
        QObject::connect(backtohome, SIGNAL(clicked()), CMenuDlg, SLOT(backtohome()));

        QMetaObject::connectSlotsByName(CMenuDlg);
    } // setupUi

    void retranslateUi(QDialog *CMenuDlg)
    {
        CMenuDlg->setWindowTitle(QApplication::translate("CMenuDlg", "Dialog", Q_NULLPTR));
        rank->setText(QApplication::translate("CMenuDlg", "\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        continue_2->setText(QApplication::translate("CMenuDlg", "\347\273\247\347\273\255\346\270\270\346\210\217", Q_NULLPTR));
        backtohome->setText(QApplication::translate("CMenuDlg", "\351\200\200\345\233\236\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        label->setText(QApplication::translate("CMenuDlg", "\350\217\234\345\215\225", Q_NULLPTR));
        movie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMenuDlg: public Ui_CMenuDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMENUDLG_H

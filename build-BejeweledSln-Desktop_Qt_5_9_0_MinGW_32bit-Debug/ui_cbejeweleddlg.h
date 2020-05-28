/********************************************************************************
** Form generated from reading UI file 'cbejeweleddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBEJEWELEDDLG_H
#define UI_CBEJEWELEDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CBejeweledDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *start;
    QLabel *config;
    QLabel *score;

    void setupUi(QDialog *CBejeweledDlg)
    {
        if (CBejeweledDlg->objectName().isEmpty())
            CBejeweledDlg->setObjectName(QStringLiteral("CBejeweledDlg"));
        CBejeweledDlg->resize(929, 649);
        CBejeweledDlg->setStyleSheet(QStringLiteral(""));
        label = new QLabel(CBejeweledDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 541, 191));
        label->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/image/baoshimizhen.png);"));
        label_2 = new QLabel(CBejeweledDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 929, 649));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/image/timg.jpg);"));
        start = new QLabel(CBejeweledDlg);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(360, 300, 201, 201));
        start->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\345\274\200\345\247\213.png);"));
        config = new QLabel(CBejeweledDlg);
        config->setObjectName(QStringLiteral("config"));
        config->setGeometry(QRect(100, 300, 201, 191));
        config->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\350\256\276\347\275\256.png);"));
        score = new QLabel(CBejeweledDlg);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(660, 310, 201, 191));
        score->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/\350\256\260\345\275\225.png);"));
        label_2->raise();
        label->raise();
        start->raise();
        config->raise();
        score->raise();

        retranslateUi(CBejeweledDlg);

        QMetaObject::connectSlotsByName(CBejeweledDlg);
    } // setupUi

    void retranslateUi(QDialog *CBejeweledDlg)
    {
        CBejeweledDlg->setWindowTitle(QApplication::translate("CBejeweledDlg", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        start->setText(QString());
        config->setText(QString());
        score->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CBejeweledDlg: public Ui_CBejeweledDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBEJEWELEDDLG_H

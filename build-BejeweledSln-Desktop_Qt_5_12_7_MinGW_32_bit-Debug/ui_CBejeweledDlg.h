/********************************************************************************
** Form generated from reading UI file 'CBejeweledDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBEJEWELEDDLG_H
#define UI_CBEJEWELEDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CBejeweledDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *start;
    QLabel *config;
    QLabel *score;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *CBejeweledDlg)
    {
        if (CBejeweledDlg->objectName().isEmpty())
            CBejeweledDlg->setObjectName(QString::fromUtf8("CBejeweledDlg"));
        CBejeweledDlg->resize(929, 649);
        CBejeweledDlg->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(CBejeweledDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 541, 191));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/baoshimizhen.png);"));
        label_2 = new QLabel(CBejeweledDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 929, 649));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/timg.jpg);"));
        start = new QLabel(CBejeweledDlg);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(360, 300, 201, 201));
        start->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/start.png);"));
        config = new QLabel(CBejeweledDlg);
        config->setObjectName(QString::fromUtf8("config"));
        config->setGeometry(QRect(100, 300, 201, 191));
        config->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/config.png);"));
        score = new QLabel(CBejeweledDlg);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(660, 310, 201, 191));
        score->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/score.png);"));
        pushButton = new QPushButton(CBejeweledDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 350, 121, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(CBejeweledDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 350, 121, 71));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(CBejeweledDlg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(710, 350, 121, 71));
        pushButton_3->setFont(font);
        label_2->raise();
        label->raise();
        start->raise();
        config->raise();
        score->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(CBejeweledDlg);
        QObject::connect(pushButton, SIGNAL(clicked()), CBejeweledDlg, SLOT(config()));

        QMetaObject::connectSlotsByName(CBejeweledDlg);
    } // setupUi

    void retranslateUi(QDialog *CBejeweledDlg)
    {
        CBejeweledDlg->setWindowTitle(QApplication::translate("CBejeweledDlg", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        start->setText(QString());
        config->setText(QString());
        score->setText(QString());
        pushButton->setText(QApplication::translate("CBejeweledDlg", "\350\256\276\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("CBejeweledDlg", "\345\274\200\345\247\213", nullptr));
        pushButton_3->setText(QApplication::translate("CBejeweledDlg", "\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBejeweledDlg: public Ui_CBejeweledDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBEJEWELEDDLG_H
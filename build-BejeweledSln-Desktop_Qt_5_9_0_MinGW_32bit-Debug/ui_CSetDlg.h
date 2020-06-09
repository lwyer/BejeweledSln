/********************************************************************************
** Form generated from reading UI file 'CSetDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSETDLG_H
#define UI_CSETDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSetDlg
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *diy1;
    QCheckBox *bgmusicswitch;
    QCheckBox *soundswitch;
    QLabel *label;
    QRadioButton *default1;
    QTextEdit *bgmusicpath;
    QLabel *label_2;
    QPushButton *browser1;
    QSlider *volumechange;
    QLabel *label_4;
    QWidget *tab_2;
    QLabel *label_3;
    QRadioButton *default2;
    QTextEdit *bgpicpath;
    QRadioButton *diy2;
    QLabel *label_5;
    QPushButton *browser2;
    QGroupBox *groupBox;
    QRadioButton *style2;
    QRadioButton *style1;
    QWidget *tab_3;
    QTextEdit *nameEdit;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CSetDlg)
    {
        if (CSetDlg->objectName().isEmpty())
            CSetDlg->setObjectName(QStringLiteral("CSetDlg"));
        CSetDlg->resize(411, 376);
        tabWidget = new QTabWidget(CSetDlg);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 391, 301));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        diy1 = new QRadioButton(tab);
        diy1->setObjectName(QStringLiteral("diy1"));
        diy1->setGeometry(QRect(190, 140, 81, 19));
        bgmusicswitch = new QCheckBox(tab);
        bgmusicswitch->setObjectName(QStringLiteral("bgmusicswitch"));
        bgmusicswitch->setGeometry(QRect(70, 80, 91, 19));
        bgmusicswitch->setChecked(true);
        bgmusicswitch->setTristate(false);
        soundswitch = new QCheckBox(tab);
        soundswitch->setObjectName(QStringLiteral("soundswitch"));
        soundswitch->setGeometry(QRect(190, 80, 91, 19));
        soundswitch->setChecked(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 72, 15));
        default1 = new QRadioButton(tab);
        default1->setObjectName(QStringLiteral("default1"));
        default1->setGeometry(QRect(100, 140, 71, 19));
        default1->setChecked(true);
        bgmusicpath = new QTextEdit(tab);
        bgmusicpath->setObjectName(QStringLiteral("bgmusicpath"));
        bgmusicpath->setEnabled(false);
        bgmusicpath->setGeometry(QRect(40, 170, 241, 31));
        bgmusicpath->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bgmusicpath->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bgmusicpath->setLineWrapMode(QTextEdit::NoWrap);
        bgmusicpath->setReadOnly(false);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 141, 16));
        browser1 = new QPushButton(tab);
        browser1->setObjectName(QStringLiteral("browser1"));
        browser1->setEnabled(false);
        browser1->setGeometry(QRect(300, 170, 71, 28));
        volumechange = new QSlider(tab);
        volumechange->setObjectName(QStringLiteral("volumechange"));
        volumechange->setGeometry(QRect(70, 240, 241, 22));
        volumechange->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 141, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 72, 15));
        default2 = new QRadioButton(tab_2);
        default2->setObjectName(QStringLiteral("default2"));
        default2->setGeometry(QRect(60, 50, 61, 19));
        default2->setChecked(true);
        bgpicpath = new QTextEdit(tab_2);
        bgpicpath->setObjectName(QStringLiteral("bgpicpath"));
        bgpicpath->setEnabled(false);
        bgpicpath->setGeometry(QRect(120, 90, 161, 31));
        bgpicpath->setAcceptDrops(true);
        bgpicpath->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bgpicpath->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bgpicpath->setLineWrapMode(QTextEdit::NoWrap);
        bgpicpath->setAcceptRichText(true);
        diy2 = new QRadioButton(tab_2);
        diy2->setObjectName(QStringLiteral("diy2"));
        diy2->setGeometry(QRect(180, 50, 81, 19));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 100, 72, 15));
        browser2 = new QPushButton(tab_2);
        browser2->setObjectName(QStringLiteral("browser2"));
        browser2->setEnabled(false);
        browser2->setGeometry(QRect(290, 90, 71, 28));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 130, 191, 41));
        style2 = new QRadioButton(groupBox);
        style2->setObjectName(QStringLiteral("style2"));
        style2->setEnabled(true);
        style2->setGeometry(QRect(100, 10, 71, 19));
        style1 = new QRadioButton(groupBox);
        style1->setObjectName(QStringLiteral("style1"));
        style1->setEnabled(true);
        style1->setGeometry(QRect(10, 10, 71, 19));
        style1->setChecked(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        nameEdit = new QTextEdit(tab_3);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(20, 130, 351, 31));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label_6->setFont(font);
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(CSetDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 330, 93, 28));
        pushButton_2 = new QPushButton(CSetDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 330, 93, 28));

        retranslateUi(CSetDlg);
        QObject::connect(pushButton_2, SIGNAL(clicked()), CSetDlg, SLOT(cancel()));
        QObject::connect(pushButton, SIGNAL(clicked()), CSetDlg, SLOT(save()));
        QObject::connect(browser1, SIGNAL(clicked()), CSetDlg, SLOT(browser1()));
        QObject::connect(browser2, SIGNAL(clicked()), CSetDlg, SLOT(browser2()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSetDlg);
    } // setupUi

    void retranslateUi(QDialog *CSetDlg)
    {
        CSetDlg->setWindowTitle(QApplication::translate("CSetDlg", "Dialog", Q_NULLPTR));
        diy1->setText(QApplication::translate("CSetDlg", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
        bgmusicswitch->setText(QApplication::translate("CSetDlg", "\350\203\214\346\231\257\351\237\263\344\271\220", Q_NULLPTR));
        soundswitch->setText(QApplication::translate("CSetDlg", "\351\237\263\346\225\210", Q_NULLPTR));
        label->setText(QApplication::translate("CSetDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", Q_NULLPTR));
        default1->setText(QApplication::translate("CSetDlg", "\351\273\230\350\256\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("CSetDlg", " \346\270\270\346\210\217\350\203\214\346\231\257\351\237\263\344\271\220\350\256\276\347\275\256", Q_NULLPTR));
        browser1->setText(QApplication::translate("CSetDlg", "\346\265\217\350\247\210...", Q_NULLPTR));
        label_4->setText(QApplication::translate("CSetDlg", " \346\270\270\346\210\217\350\203\214\346\231\257\351\237\263\344\271\220\351\237\263\351\207\217", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CSetDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("CSetDlg", "\345\256\235\347\237\263\345\233\276\347\211\207", Q_NULLPTR));
        default2->setText(QApplication::translate("CSetDlg", "\351\273\230\350\256\244", Q_NULLPTR));
        diy2->setText(QApplication::translate("CSetDlg", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
        label_5->setText(QApplication::translate("CSetDlg", "\350\203\214\346\231\257\345\233\276\347\211\207", Q_NULLPTR));
        browser2->setText(QApplication::translate("CSetDlg", "\346\265\217\350\247\210...", Q_NULLPTR));
        groupBox->setTitle(QString());
        style2->setText(QApplication::translate("CSetDlg", "\351\243\216\346\240\2742", Q_NULLPTR));
        style1->setText(QApplication::translate("CSetDlg", "\351\243\216\346\240\2741", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CSetDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("CSetDlg", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\270\270\346\210\217\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CSetDlg", "\345\247\223\345\220\215\350\256\276\347\275\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSetDlg", "\344\277\235\345\255\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CSetDlg", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSetDlg: public Ui_CSetDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSETDLG_H

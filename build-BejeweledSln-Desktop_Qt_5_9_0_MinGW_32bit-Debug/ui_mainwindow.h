/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *tishi;
    QRadioButton *logon;
    QRadioButton *login;
    QCheckBox *rempass;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(220, 180, 81, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 140, 61, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 120, 71, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(160, 80, 141, 16));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 120, 141, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 100, 141, 16));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(160, 140, 141, 20));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 270, 61, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 51, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 180, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 61, 16));
        tishi = new QLabel(centralwidget);
        tishi->setObjectName(QStringLiteral("tishi"));
        tishi->setGeometry(QRect(80, 45, 211, 21));
        tishi->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        logon = new QRadioButton(centralwidget);
        logon->setObjectName(QStringLiteral("logon"));
        logon->setGeometry(QRect(90, 220, 115, 19));
        logon->setChecked(true);
        login = new QRadioButton(centralwidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(220, 220, 115, 19));
        rempass = new QCheckBox(centralwidget);
        rempass->setObjectName(QStringLiteral("rempass"));
        rempass->setGeometry(QRect(310, 120, 91, 19));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\257\206   \347\240\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\224\250 \346\210\267\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\264\246   \345\217\267", Q_NULLPTR));
        tishi->setText(QString());
        logon->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        rempass->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

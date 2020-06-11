/********************************************************************************
** Form generated from reading UI file 'CTimeup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTIMEUP_H
#define UI_CTIMEUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CTimeup
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *CTimeup)
    {
        if (CTimeup->objectName().isEmpty())
            CTimeup->setObjectName(QStringLiteral("CTimeup"));
        CTimeup->resize(418, 233);
        pushButton = new QPushButton(CTimeup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 140, 93, 28));
        label = new QLabel(CTimeup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 151, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(22);
        label->setFont(font);

        retranslateUi(CTimeup);

        QMetaObject::connectSlotsByName(CTimeup);
    } // setupUi

    void retranslateUi(QDialog *CTimeup)
    {
        CTimeup->setWindowTitle(QApplication::translate("CTimeup", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CTimeup", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        label->setText(QApplication::translate("CTimeup", "\346\227\266\351\227\264\345\210\260\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CTimeup: public Ui_CTimeup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTIMEUP_H

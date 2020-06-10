/********************************************************************************
** Form generated from reading UI file 'CGamePass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEPASS_H
#define UI_CGAMEPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CGamePass
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *CGamePass)
    {
        if (CGamePass->objectName().isEmpty())
            CGamePass->setObjectName(QStringLiteral("CGamePass"));
        CGamePass->resize(398, 166);
        label = new QLabel(CGamePass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 301, 51));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        label->setFont(font);
        pushButton = new QPushButton(CGamePass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 110, 93, 28));

        retranslateUi(CGamePass);
        QObject::connect(pushButton, SIGNAL(clicked()), CGamePass, SLOT(back()));

        QMetaObject::connectSlotsByName(CGamePass);
    } // setupUi

    void retranslateUi(QDialog *CGamePass)
    {
        CGamePass->setWindowTitle(QApplication::translate("CGamePass", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CGamePass", "\346\201\255\345\226\234\346\202\250\357\274\214\350\257\245\346\250\241\345\274\217\351\200\232\345\205\263\357\274\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CGamePass", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGamePass: public Ui_CGamePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEPASS_H

/********************************************************************************
** Form generated from reading UI file 'blank.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLANK_H
#define UI_BLANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blank
{
public:

    void setupUi(QWidget *Blank)
    {
        if (Blank->objectName().isEmpty())
            Blank->setObjectName(QStringLiteral("Blank"));
        Blank->resize(400, 300);

        retranslateUi(Blank);

        QMetaObject::connectSlotsByName(Blank);
    } // setupUi

    void retranslateUi(QWidget *Blank)
    {
        Blank->setWindowTitle(QApplication::translate("Blank", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Blank: public Ui_Blank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLANK_H

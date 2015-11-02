/********************************************************************************
** Form generated from reading UI file 'scorescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORESCREEN_H
#define UI_SCORESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreScreen
{
public:
    QLabel *scoreLabel;
    QPushButton *againPushButton;

    void setupUi(QWidget *ScoreScreen)
    {
        if (ScoreScreen->objectName().isEmpty())
            ScoreScreen->setObjectName(QStringLiteral("ScoreScreen"));
        ScoreScreen->resize(400, 300);
        scoreLabel = new QLabel(ScoreScreen);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(120, 70, 151, 41));
        QFont font;
        font.setPointSize(15);
        scoreLabel->setFont(font);
        againPushButton = new QPushButton(ScoreScreen);
        againPushButton->setObjectName(QStringLiteral("againPushButton"));
        againPushButton->setGeometry(QRect(120, 150, 111, 41));
        QFont font1;
        font1.setPointSize(13);
        againPushButton->setFont(font1);
        againPushButton->setAutoDefault(true);
        againPushButton->setDefault(true);

        retranslateUi(ScoreScreen);

        QMetaObject::connectSlotsByName(ScoreScreen);
    } // setupUi

    void retranslateUi(QWidget *ScoreScreen)
    {
        ScoreScreen->setWindowTitle(QApplication::translate("ScoreScreen", "Form", 0));
        scoreLabel->setText(QApplication::translate("ScoreScreen", "TextLabel", 0));
        againPushButton->setText(QApplication::translate("ScoreScreen", "Again", 0));
    } // retranslateUi

};

namespace Ui {
    class ScoreScreen: public Ui_ScoreScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORESCREEN_H

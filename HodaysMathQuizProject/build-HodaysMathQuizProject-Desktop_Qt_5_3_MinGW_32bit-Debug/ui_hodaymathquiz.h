/********************************************************************************
** Form generated from reading UI file 'hodaymathquiz.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HODAYMATHQUIZ_H
#define UI_HODAYMATHQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HodayMathQuiz
{
public:
    QPushButton *pushButton;
    QLabel *labelMathProblem;
    QLineEdit *lineEditInput;
    QLabel *labelResult;
    QLabel *labelScore;

    void setupUi(QWidget *HodayMathQuiz)
    {
        if (HodayMathQuiz->objectName().isEmpty())
            HodayMathQuiz->setObjectName(QStringLiteral("HodayMathQuiz"));
        HodayMathQuiz->resize(400, 300);
        pushButton = new QPushButton(HodayMathQuiz);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 150, 93, 28));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        labelMathProblem = new QLabel(HodayMathQuiz);
        labelMathProblem->setObjectName(QStringLiteral("labelMathProblem"));
        labelMathProblem->setGeometry(QRect(100, 80, 181, 51));
        QFont font1;
        font1.setPointSize(19);
        labelMathProblem->setFont(font1);
        lineEditInput = new QLineEdit(HodayMathQuiz);
        lineEditInput->setObjectName(QStringLiteral("lineEditInput"));
        lineEditInput->setGeometry(QRect(22, 150, 231, 28));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditInput->sizePolicy().hasHeightForWidth());
        lineEditInput->setSizePolicy(sizePolicy);
        lineEditInput->setFont(font);
        labelResult = new QLabel(HodayMathQuiz);
        labelResult->setObjectName(QStringLiteral("labelResult"));
        labelResult->setGeometry(QRect(140, 200, 91, 21));
        labelScore = new QLabel(HodayMathQuiz);
        labelScore->setObjectName(QStringLiteral("labelScore"));
        labelScore->setGeometry(QRect(160, 250, 53, 16));
        QWidget::setTabOrder(lineEditInput, pushButton);

        retranslateUi(HodayMathQuiz);

        QMetaObject::connectSlotsByName(HodayMathQuiz);
    } // setupUi

    void retranslateUi(QWidget *HodayMathQuiz)
    {
        HodayMathQuiz->setWindowTitle(QApplication::translate("HodayMathQuiz", "HodayMathQuiz", 0));
        pushButton->setText(QApplication::translate("HodayMathQuiz", "Send", 0));
        labelMathProblem->setText(QString());
        labelResult->setText(QString());
        labelScore->setText(QApplication::translate("HodayMathQuiz", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HodayMathQuiz: public Ui_HodayMathQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HODAYMATHQUIZ_H

/********************************************************************************
** Form generated from reading UI file 'quizquestiondisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZQUESTIONDISPLAY_H
#define UI_QUIZQUESTIONDISPLAY_H

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

class Ui_QuizQuestionDisplay
{
public:
    QPushButton *pushButton;
    QLabel *labelMathProblem;
    QLineEdit *lineEditInput;
    QLabel *labelResult;
    QLabel *labelScore;

    void setupUi(QWidget *QuizQuestionDisplay)
    {
        if (QuizQuestionDisplay->objectName().isEmpty())
            QuizQuestionDisplay->setObjectName(QStringLiteral("QuizQuestionDisplay"));
        QuizQuestionDisplay->resize(400, 300);
        pushButton = new QPushButton(QuizQuestionDisplay);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 150, 93, 28));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        labelMathProblem = new QLabel(QuizQuestionDisplay);
        labelMathProblem->setObjectName(QStringLiteral("labelMathProblem"));
        labelMathProblem->setGeometry(QRect(100, 80, 181, 51));
        QFont font1;
        font1.setPointSize(19);
        labelMathProblem->setFont(font1);
        lineEditInput = new QLineEdit(QuizQuestionDisplay);
        lineEditInput->setObjectName(QStringLiteral("lineEditInput"));
        lineEditInput->setGeometry(QRect(22, 150, 231, 28));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditInput->sizePolicy().hasHeightForWidth());
        lineEditInput->setSizePolicy(sizePolicy);
        lineEditInput->setFont(font);
        labelResult = new QLabel(QuizQuestionDisplay);
        labelResult->setObjectName(QStringLiteral("labelResult"));
        labelResult->setGeometry(QRect(140, 200, 91, 21));
        labelScore = new QLabel(QuizQuestionDisplay);
        labelScore->setObjectName(QStringLiteral("labelScore"));
        labelScore->setGeometry(QRect(160, 250, 53, 16));
        QWidget::setTabOrder(lineEditInput, pushButton);

        retranslateUi(QuizQuestionDisplay);

        QMetaObject::connectSlotsByName(QuizQuestionDisplay);
    } // setupUi

    void retranslateUi(QWidget *QuizQuestionDisplay)
    {
        QuizQuestionDisplay->setWindowTitle(QApplication::translate("QuizQuestionDisplay", "HodayMathQuiz", 0));
        pushButton->setText(QApplication::translate("QuizQuestionDisplay", "Send", 0));
        labelMathProblem->setText(QString());
        labelResult->setText(QString());
        labelScore->setText(QApplication::translate("QuizQuestionDisplay", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizQuestionDisplay: public Ui_QuizQuestionDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZQUESTIONDISPLAY_H

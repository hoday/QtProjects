#include <cstdlib>
#include "qtimer.h"
#include "blank.h"
#include "quizquestion.h"
#include "quizquestiondisplay.h"
#include "ui_quizquestiondisplay.h"


QuizQuestionDisplay::QuizQuestionDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuizQuestionDisplay)
{
    this->parent = parent;

    ui->setupUi(this);
}

void QuizQuestionDisplay::setBlank(Blank *b){
    this->blank = b;
}

QuizQuestionDisplay::~QuizQuestionDisplay()
{
    delete ui;
}

void QuizQuestionDisplay::startNewQuiz()
{
    ui->labelResult->clear();
    ui->labelScore->clear();
}


void QuizQuestionDisplay::on_pushButton_clicked()
{
    onUserSubmitAnswer();

}

void QuizQuestionDisplay::on_lineEditInput_returnPressed()
{
    onUserSubmitAnswer();
}


void QuizQuestionDisplay::displayNewQuestion(QuizQuestion *q){
    startNewQuiz();
    ui->labelMathProblem->setText(q->toQString());

    ui->lineEditInput->setText(QString(""));
    ui->lineEditInput->setFocus();

}



void QuizQuestionDisplay::displayUserAnswerResult(bool result, int correctCount, int questionCount){
    QString *resultText;
    //QString *color;
    QColor color;
    if (result){
        resultText = new QString("Ok");
        //color = new QString("{color: #22BB22}");
        color = QColor(16, 255, 16);
    } else {
        resultText = new QString("Wrong");
        //color = new QString("{color: #CC2222}");
        color = QColor(255, 16, 16);

    }
    ui->labelResult->setText(*resultText);
    //QColor color(255, 16, 16);
    //ui->labelResult->setStyleSheet(*color);
    QPalette palette = ui->labelResult->palette();
    palette.setColor(QPalette::WindowText, color);
    ui->labelResult->setPalette(palette);
    ui->labelScore->setText(QString::number(correctCount) + " / " + QString::number(questionCount));
    //QTimer::singleShot(1000, this, SLOT(startNewQuiz()));
}


void QuizQuestionDisplay::onUserSubmitAnswer()
{
    // get user input
    QString userAnswerString = ui->lineEditInput->text();

    if (!userAnswerString.isEmpty())
    {
        bool ok;
        int userAnswer = userAnswerString.toInt(&ok, 10);
        if (ok){
            this->blank->checkUserAnswer(userAnswer);
        }
    }
}



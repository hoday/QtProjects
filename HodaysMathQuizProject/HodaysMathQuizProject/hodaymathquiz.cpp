#include <cstdlib>
#include "qtimer.h"
#include "blank.h"
#include "hodaymathquiz.h"
#include "ui_hodaymathquiz.h"

HodayMathQuiz::HodayMathQuiz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HodayMathQuiz)
{
    this->parent = parent;

    ui->setupUi(this);
    startNewQuiz();

}

void HodayMathQuiz::setBlank(Blank *b){
    this->blank = b;
}

HodayMathQuiz::~HodayMathQuiz()
{
    delete ui;
}

void HodayMathQuiz::startNewQuiz()
{
    score = 0;
    numberQuestionsAnswered = 0;
    ui->labelResult->clear();
    ui->labelScore->clear();
    makeNewQuestion();
}


void HodayMathQuiz::on_pushButton_clicked()
{
    onUserSubmitAnswer();



}

void HodayMathQuiz::makeNewQuestion(){

    a = rand() % 10;
    b = rand() % 10;
    correctAnswer = a + b;

    ui->labelMathProblem->setText(QString::number(a, 10) + " + " + QString::number(b, 10));

    ui->lineEditInput->setText(QString(""));
    ui->lineEditInput->setFocus();

}

void HodayMathQuiz::on_lineEditInput_returnPressed()
{
    onUserSubmitAnswer();
}

void HodayMathQuiz::onUserSubmitAnswer()
{
    // get user input
    QString userAnswerString = ui->lineEditInput->text();
    bool ok;

    if (!userAnswerString.isEmpty())
    {

    int userAnswer = userAnswerString.toInt(&ok, 10);

    QString *resultText;
    bool okk = true;
    if ((okk) && (userAnswer == correctAnswer)){
        score++;
        resultText = new QString("Ok");

    } else {
        resultText = new QString("Wrong");
    }
    numberQuestionsAnswered++;
    // set result

    ui->labelResult->setText(*resultText);
    ui->labelScore->setText(QString::number(score));


    if (numberQuestionsAnswered == QUESTIONS_PER_QUIZ){
        this->blank->showResults(score);
    } else {
    //QTimer::singleShot(0, line, SLOT(setFocus()));
        QTimer::singleShot(500, this, SLOT(makeNewQuestion()));

        //makeNewQuestion();
    }
    }

}



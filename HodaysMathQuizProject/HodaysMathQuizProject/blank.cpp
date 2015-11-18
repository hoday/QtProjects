#include <iostream>
#include "QTimer"
#include "quizselectionscreen.h"
#include "quizquestion.h"
#include "quizquestiondisplay.h"
#include "quizcontrol.h"
#include "scorescreen.h"
#include "blank.h"
#include "ui_blank.h"

Blank::Blank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Blank)
{
    ui->setupUi(this);
    this->hide();

    this->quizSelectionScreen = new QuizSelectionScreen(this);
    this->quizSelectionScreen->setBlank(this);
    this->quizQuestionView = new QuizQuestionDisplay(this);
    this->quizQuestionView->setBlank(this);
    this->quizQuestionView->startNewQuiz();
    this->resultsView = new ScoreScreen(this);
    this->resultsView->setBlank(this);

    this->resultsView->hide();
    this->quizQuestionView->hide();
    this->quizSelectionScreen->show();
    this->show();
    isFirstQuestion = true;

}

void Blank::setQuizControl(QuizControl *q){
    this->quizControl = q;
}

Blank::~Blank()
{
    delete ui;
}

void Blank::displayNewQuestion(){
    this->quizQuestionView->displayNewQuestion(this->currentQuestion);
    this->quizQuestionView->show();
    this->resultsView->hide();
    this->quizSelectionScreen->hide();
    std::cout << "in function blank::displaynewquestion" << std::endl;

}

void Blank::displayNewQuestion2(QuizQuestion *q){
    this->currentQuestion = q;
    int delayTime;
    if (isFirstQuestion){
        delayTime = 0;
    } else {
        delayTime = 500;
    }
    isFirstQuestion = false;

    QTimer::singleShot(delayTime, this, SLOT(displayNewQuestion()));

}

void Blank::displayUserAnswerResult(bool result, int correctCount, int questionCount){
    this->quizQuestionView->displayUserAnswerResult(result, correctCount, questionCount);


}

void Blank::displayQuizResult(int correctCount, int questionCount){
    this->resultsView->displayQuizResult(correctCount, questionCount);
    //this->quizQuestionView->hide();
    //this->resultsView->show();
    QTimer::singleShot(500, quizQuestionView, SLOT(hide()));
    QTimer::singleShot(500, resultsView, SLOT(show()));



}

void Blank::startQuiz(){
    isFirstQuestion = true;

    this->quizControl->startQuiz();
    this->quizQuestionView->startNewQuiz();

}

void Blank::selectAnotherQuiz(){
    this->quizSelectionScreen->show();
    this->quizQuestionView->hide();
    this->resultsView->hide();

}

void Blank::setQuiz(int num){
    this->quizControl->setQuiz(num);
}

void Blank::checkUserAnswer(int userAnswer){
    this->quizControl->checkUserAnswer(userAnswer);
}




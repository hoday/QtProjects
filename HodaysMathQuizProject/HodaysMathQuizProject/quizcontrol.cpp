#include <iostream>

#include "QTimer"
#include "quizquestion.h"
#include "blank.h"
#include "quizcontrol.h"

QuizControl::QuizControl()
{

    this->blank = new Blank();
    this->blank->setQuizControl(this);
    //this->blank->show();
    //startQuiz();
}

void QuizControl::makeNewQuestion(){
    this->currentQuestion = new QuizQuestion();
    questionCount++;

    this->blank->displayNewQuestion2(this->currentQuestion);
    std::cout << "told to display new question" << std::endl;

}

void QuizControl::checkUserAnswer(int answer){
    bool result;
    if (answer == this->currentQuestion->correctAnswer){
        correctCount++;
        result = true;
    } else {
        result = false;


    }
    this->blank->displayUserAnswerResult(result, correctCount, questionCount);

    this->checkQuizEnd();


}

void QuizControl::startQuiz(){
    correctCount = 0;
    questionCount = 0;
    makeNewQuestion();


}

void QuizControl::checkQuizEnd(){
    if (questionCount == QUESTIONS_PER_QUIZ){
        //QTimer::singleShot(500, this, SLOT(makeNewQuestion()));
        //QTimer::singleShot(500, blank, SLOT(displayQuizResult(correctCount, questionCount)));

        this->blank->displayQuizResult(correctCount, questionCount);

    } else {
        makeNewQuestion();
    }
}

int QuizControl::waitForAnswer(){
    int answer = 2;
    return answer;
}


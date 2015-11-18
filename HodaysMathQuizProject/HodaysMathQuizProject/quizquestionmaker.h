#ifndef QUIZQUESTIONMAKER_H
#define QUIZQUESTIONMAKER_H
#include "operationenum.h"

class QuizQuestion;

class QuizQuestionMaker
{
public:
    QuizQuestionMaker();
    QuizQuestionMaker(Operation op);
    QuizQuestion *getNextQuestion();

private:
    Operation op;
};

#endif // QUIZQUESTIONMAKER_H

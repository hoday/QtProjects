#ifndef QUIZQUESTION_H
#define QUIZQUESTION_H
#include "operationenum.h"
class QString;


class QuizQuestion
{
public:
    QuizQuestion();
    QuizQuestion(Operation operation);

    int a;
    int b;
    Operation operation;
    int correctAnswer;

    QString toQString();

private:
    void calculateCorrectAnswer();


};

#endif // QUIZQUESTION_H

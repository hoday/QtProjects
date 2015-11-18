#include <cstdlib>
#include "QString"
#include "quizquestion.h"

QuizQuestion::QuizQuestion()
{
    a = rand() % 10;
    b = rand() % 10;
    operation = ADD;
    calculateCorrectAnswer();
}

QuizQuestion::QuizQuestion(Operation op)
{
    a = rand() % 10;
    b = rand() % 10;
    operation = op;
    calculateCorrectAnswer();

}

void QuizQuestion::calculateCorrectAnswer()
{
    switch(operation){
    case ADD:{
        correctAnswer = a + b;
    }
        break;
    case SUBTRACT:
    {
        correctAnswer = a - b;

    }
        break;
    case MULTIPLY:
    {
        correctAnswer = a * b;

    }
        break;
    }

}

QString QuizQuestion::toQString()
{
    QString operationString;
    switch(operation){
    case ADD:{
        operationString = QString(" + ");
    }
        break;
    case SUBTRACT:
    {
        operationString = QString(" - ");

    }
        break;
    case MULTIPLY:
    {
        operationString = QString(" * ");

    }
        break;
    }
    return QString::number(a, 10) + operationString + QString::number(b, 10);
}

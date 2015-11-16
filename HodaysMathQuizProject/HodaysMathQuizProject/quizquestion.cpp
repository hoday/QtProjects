#include <cstdlib>
#include "QString"
#include "quizquestion.h"

QuizQuestion::QuizQuestion()
{
    a = rand() % 10;
    b = rand() % 10;
    correctAnswer = a + b;
}

QString QuizQuestion::toQString()
{
    return QString::number(a, 10) + " + " + QString::number(b, 10);
}

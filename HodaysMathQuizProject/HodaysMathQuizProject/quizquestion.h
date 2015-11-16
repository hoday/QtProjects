#ifndef QUIZQUESTION_H
#define QUIZQUESTION_H
class QString;

class QuizQuestion
{
public:
    QuizQuestion();

    int a;
    int b;
    int correctAnswer;

    QString toQString();

};

#endif // QUIZQUESTION_H

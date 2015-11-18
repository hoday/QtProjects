#ifndef QUIZCONTROL_H
#define QUIZCONTROL_H

class QuizQuestion;
class QuizQuestionMaker;

class QuizControl
{
public:
    QuizControl();
    void startQuiz();
    void checkUserAnswer(int answer);
    void setQuiz(int num);


private:
    static const int QUESTIONS_PER_QUIZ = 3;
    void makeNewQuestion();
    int waitForAnswer();
    void checkQuizEnd();

    Blank *blank;
    QuizQuestion *currentQuestion;
    QuizQuestionMaker *quizQuestionMaker;

    int correctCount;
    int questionCount;
};

#endif // QUIZCONTROL_H

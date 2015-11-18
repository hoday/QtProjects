#ifndef BLANK_H
#define BLANK_H

#include <QWidget>
namespace Ui {
class Blank;
}

class QuizQuestionDisplay;
class ScoreScreen;
class QuizQuestion;
class QuizControl;
class QuizSelectionScreen;

class Blank : public QWidget
{
    Q_OBJECT

public:
    explicit Blank(QWidget *parent = 0);
    ~Blank();
    void setQuizControl(QuizControl *q);

    void displayQuizResult(int correctCount, int questionCount);
    void displayUserAnswerResult(bool result, int correctCount, int questionCount);

    void startQuiz();
    void selectAnotherQuiz();
    void setQuiz(int num);

    void checkUserAnswer(int userAnswer);

    void displayNewQuestion2(QuizQuestion *q);


private slots:
    void displayNewQuestion();


private:
    Ui::Blank *ui;
    QuizSelectionScreen *quizSelectionScreen;
    QuizQuestionDisplay *quizQuestionView;
    ScoreScreen *resultsView;

    QuizControl *quizControl;
    QuizQuestion *currentQuestion;

    bool isFirstQuestion;

};

#endif // BLANK_H

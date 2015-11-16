#ifndef QUIZQUESTIONDISPLAY_H
#define QUIZQUESTIONDISPLAY_H

#include <QWidget>

class QuizQuestion;
class QuizControl;
class Blank;

namespace Ui {
class QuizQuestionDisplay;
}


class QuizQuestionDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit QuizQuestionDisplay(QWidget *parent = 0);
    void setBlank(Blank *b);
    void displayNewQuestion(QuizQuestion *q);
    void displayUserAnswerResult(bool result, int correctCount, int questionCount);

    ~QuizQuestionDisplay();
    static const int QUESTIONS_PER_QUIZ = 3;

public slots:
    void startNewQuiz();

private slots:


    void on_pushButton_clicked();

    void on_lineEditInput_returnPressed();

private:


    Ui::QuizQuestionDisplay *ui;
    Blank *blank;
    QWidget *parent;

    void makeNewQuestion();
    void onUserSubmitAnswer();
    QuizControl *quizControl;

};

#endif // QUIZQUESTIONDISPLAY_H

#ifndef HODAYMATHQUIZ_H
#define HODAYMATHQUIZ_H

#include <QWidget>

namespace Ui {
class HodayMathQuiz;
}

class Blank;

class HodayMathQuiz : public QWidget
{
    Q_OBJECT

public:
    explicit HodayMathQuiz(QWidget *parent = 0);
    void setBlank(Blank *b);
    void startNewQuiz();

    ~HodayMathQuiz();
    static const int QUESTIONS_PER_QUIZ = 3;

private slots:
    void on_pushButton_clicked();

    void on_lineEditInput_returnPressed();

private:


    Ui::HodayMathQuiz *ui;
    Blank *blank;
    QWidget *parent;

    void makeNewQuestion();
    void onUserSubmitAnswer();


    int a;
    int b;

    int correctAnswer;
    int numberQuestionsAnswered;
    int score;
};

#endif // HODAYMATHQUIZ_H

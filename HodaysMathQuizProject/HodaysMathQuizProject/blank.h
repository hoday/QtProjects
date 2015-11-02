#ifndef BLANK_H
#define BLANK_H

#include <QWidget>

namespace Ui {
class Blank;
}

class HodayMathQuiz;
class ScoreScreen;

class Blank : public QWidget
{
    Q_OBJECT

public:
    explicit Blank(QWidget *parent = 0);
    ~Blank();

    void showResults(int score);
    void startNewQuiz();


private:
    Ui::Blank *ui;
    HodayMathQuiz *w;
    ScoreScreen *w2;

};

#endif // BLANK_H

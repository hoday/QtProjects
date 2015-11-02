#include "hodaymathquiz.h"
#include "scorescreen.h"
#include "blank.h"
#include "ui_blank.h"

Blank::Blank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Blank)
{
    ui->setupUi(this);
    this->hide();

    w = new HodayMathQuiz(this);
    w->setBlank(this);
    w2 = new ScoreScreen(this);
    w2->setBlank(this);


    startNewQuiz();
}

Blank::~Blank()
{
    delete ui;
}

void Blank::showResults(int score)
{
    w->hide();
    w2->setResults(score);
    w2->show();
}

void Blank::startNewQuiz(){
    w2->hide();
    w->startNewQuiz();
    w->show();
}


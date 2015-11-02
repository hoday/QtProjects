#include "blank.h"
#include "hodaymathquiz.h"
#include "scorescreen.h"
#include "ui_scorescreen.h"

ScoreScreen::ScoreScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScoreScreen)
{
    this->parent = parent;
    ui->setupUi(this);
}

void ScoreScreen::setBlank(Blank *b){
    this->blank = b;
}

ScoreScreen::~ScoreScreen()
{
    delete ui;
}

void ScoreScreen::on_againPushButton_clicked()
{
    this->blank->startNewQuiz();
}



void ScoreScreen::setResults(int score){
    int maxScore = HodayMathQuiz::QUESTIONS_PER_QUIZ;
    ui->scoreLabel->setText(QString::number(score) + " / " + QString::number(maxScore));
    ui->againPushButton->setFocus();
}

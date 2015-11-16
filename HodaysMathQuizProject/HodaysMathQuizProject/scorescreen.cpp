#include "blank.h"
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
    this->blank->startQuiz();
}



void ScoreScreen::displayQuizResult(int correctCount, int questionCount){
    ui->scoreLabel->setText(QString::number(correctCount) + " / " + QString::number(questionCount));
    ui->againPushButton->setFocus();
}

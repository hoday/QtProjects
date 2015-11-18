#include <iostream>

#include "blank.h"
#include "quizselectionscreen.h"
#include "ui_quizselectionscreen.h"

QuizSelectionScreen::QuizSelectionScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuizSelectionScreen)
{
    ui->setupUi(this);
}

QuizSelectionScreen::~QuizSelectionScreen()
{
    delete ui;
}

void QuizSelectionScreen::setBlank(Blank *b){
    this->blank = b;
}

void QuizSelectionScreen::on_pushButton_clicked()
{
    QModelIndex index = ui->listWidget->currentIndex();
    if (index.isValid()){
        std::cout << "Selected row: " << index.row() << std::endl;
        this->blank->setQuiz(index.row());
        this->blank->startQuiz();
    }

}

void QuizSelectionScreen::on_listWidget_doubleClicked(const QModelIndex &index)
{
    std::cout << "Selected row: " << index.row() << std::endl;
    this->blank->setQuiz(index.row());
    this->blank->startQuiz();
}

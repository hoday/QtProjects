#include <iostream>
#include "operationenum.h"
#include "quizquestion.h"
#include "quizquestionmaker.h"

QuizQuestionMaker::QuizQuestionMaker()
{
}

QuizQuestionMaker::QuizQuestionMaker(Operation op){
    std::cout << "Made new quiz maker : op : " << op << std::endl;
    this->op = op;
}

QuizQuestion *QuizQuestionMaker::getNextQuestion()
{
    return new QuizQuestion(op);

}


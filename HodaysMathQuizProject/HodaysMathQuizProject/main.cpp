#include <iostream>
#include "blank.h"
#include "quizcontrol.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizControl c;
    std::cout << "instantiated QuizControl" << std::endl;
    c.startQuiz();
    std::cout << "started Quiz" << std::endl;

    //Blank w;
    //w.show();

    return a.exec();
}

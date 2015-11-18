#ifndef QUIZSELECTIONSCREEN_H
#define QUIZSELECTIONSCREEN_H

#include <QWidget>

class Blank;

namespace Ui {
class QuizSelectionScreen;
}

class QuizSelectionScreen : public QWidget
{
    Q_OBJECT

public:
    explicit QuizSelectionScreen(QWidget *parent = 0);
    ~QuizSelectionScreen();
    void setBlank(Blank *b);


private slots:
    void on_pushButton_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::QuizSelectionScreen *ui;
    Blank *blank;
};

#endif // QUIZSELECTIONSCREEN_H

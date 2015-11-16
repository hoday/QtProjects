#ifndef SCORESCREEN_H
#define SCORESCREEN_H

#include <QWidget>

namespace Ui {
class ScoreScreen;
}

class Blank;

class ScoreScreen : public QWidget
{
    Q_OBJECT

public:
    explicit ScoreScreen(QWidget *parent = 0);
    void setBlank(Blank *b);
    void displayQuizResult(int correctCount, int questionCount);

    ~ScoreScreen();

private slots:
    void on_againPushButton_clicked();

private:
    Ui::ScoreScreen *ui;
    Blank *blank;
    QWidget *parent;

};

#endif // SCORESCREEN_H

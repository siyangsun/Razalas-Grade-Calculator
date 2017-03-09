#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class GradeCalculator;
}

class GradeCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit GradeCalculator(QWidget *parent = 0);
    ~GradeCalculator();

signals:
    double compute_overall();

public slots:
    void update_overall(int my_grade);

private:
    Ui::GradeCalculator *ui;
};

#endif // GRADECALCULATOR_H

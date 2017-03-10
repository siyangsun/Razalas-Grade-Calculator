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

private slots:
    void computeScore();
    void on_horizontalSlider_valueChanged(int unused);
    void on_horizontalSlider_2_valueChanged(int unused);
    void on_horizontalSlider_3_valueChanged(int unused);
    void on_horizontalSlider_4_valueChanged(int unused);
    void on_horizontalSlider_5_valueChanged(int unused);
    void on_horizontalSlider_6_valueChanged(int unused);
    void on_horizontalSlider_7_valueChanged(int unused);
    void on_horizontalSlider_8_valueChanged(int unused);
    void on_horizontalSlider_9_valueChanged(int unused);
    void on_horizontalSlider_10_valueChanged(int unused);
    void on_horizontalSlider_11_valueChanged(int unused);
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();

private:
    Ui::GradeCalculator *ui;
};

#endif // GRADECALCULATOR_H

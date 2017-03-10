#include "gradecalculator.h"
#include "ui_gradecalculator.h"
#include <QString>
#include <algorithm>

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::computeScore()
{
    bool gradingSchemeA = this->ui->radioButton->isChecked();
    bool gradingSchemeB = this->ui->radioButton_2->isChecked();
    //Link this to a button/switch, if it's pressed then change the grading scheme using an if statement on score
    //Same thing with different classes
    double hw1 = this->ui->horizontalSlider->value();
    double hw2 = this->ui->horizontalSlider_2->value();
    double hw3 = this->ui->horizontalSlider_3->value();
    double hw4 = this->ui->horizontalSlider_4->value();
    double hw5 = this->ui->horizontalSlider_5->value();
    double hw6 = this->ui->horizontalSlider_6->value();
    double hw7 = this->ui->horizontalSlider_7->value();
    double hw8 = this->ui->horizontalSlider_8->value();
    double mt1 = this->ui->horizontalSlider_9->value();
    double mt2 = this->ui->horizontalSlider_10->value();
    double final = this->ui->horizontalSlider_11->value();
    double hw_scores[] = {hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8};
    //One homework gets dropped
    double minval = hw_scores[0];
        for ( int i = 1; i < 8; i++ )
            if ( hw_scores[i] < minval )
                minval = hw_scores[i];
    double hw_average = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8 - minval) / 7;
    double score_A = (0.25 * hw_average) + (0.20 * mt1) + (0.20 * mt2) + (0.35 * final);
    double score_B = (0.25 * hw_average) + (0.30 * std::max(mt1, mt2)) + (0.44 * final);
    double score = 0;
    if (gradingSchemeA == true) {
        score = score_A;
    }
    else if (gradingSchemeB == true) {
        score = score_B;
    }
    //Might have multiple grading schemes where it automatically calculates the highest score
    ui->result->setText(QString::number(score));
    ui->result_2->setText(QString::number(std::max(score_A, score_B)));
    return;
}

void GradeCalculator::on_horizontalSlider_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_2_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_3_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_4_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_5_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_6_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_7_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_8_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_9_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_10_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_horizontalSlider_11_valueChanged(int unused)
{
    computeScore();
    Q_UNUSED(unused);
}

void GradeCalculator::on_radioButton_clicked()
{
    computeScore();
}

void GradeCalculator::on_radioButton_2_clicked()
{
    computeScore();
}


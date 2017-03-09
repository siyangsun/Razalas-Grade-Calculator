#include "gradecalculator.h"
#include "ui_gradecalculator.h"
#include <QString>

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->result, SLOT(setValue(int)));
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

double compute_overall()
{
    return 0;
}

void GradeCalculator::update_overall(int my_grade)
{
    double score = 31.4;
    //double score = static_cast<double>(my_grade);

    ui->result->setText(QString::number(score));
    return;
}

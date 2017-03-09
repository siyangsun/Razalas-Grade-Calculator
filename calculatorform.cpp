#include "calculatorform.h"
#include <QtGui>
#include "ui_calculatorform.h"

CalculatorForm::CalculatorForm(QWidget *parent) : QMainWindow(parent), ui(new Ui::CalculatorForm)
{
    ui->setupUi(this);
    QObject::connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
}

CalculatorForm::~CalculatorForm()
{
    delete ui;
}

void CalculatorForm::update_overall(int unused)
{
    double score = static_case<double>(unused);


}

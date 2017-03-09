#include "myslider.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include <QString>
#include "calculatorform.h"

int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
    CalculatorForm mycalculator = new CalculatorForm();
    mycalculator.show();

    return prog.exec();
}

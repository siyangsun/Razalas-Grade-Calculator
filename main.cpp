#include "gradecalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GradeCalculator w;
    w.show();
    w.update_overall(10);
    return a.exec();
}

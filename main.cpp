#include "myslider.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
    QWidget window;
    window.setFixedSize(600, 800);
    window.setWindowTitle("Razalas Grade Calculator");
    MySlider w = new MySlider(&window);
    w.name = "Homework 1";
    window.show();

    return prog.exec();
}

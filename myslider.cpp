#include "myslider.h"

MySlider::MySlider(QWidget *parent) : QWidget(parent)
{
    //setWindowTitle(name);
    //value = 0;

    slider = new QSlider(Qt::Horizontal);
    spinBox = new QSpinBox();

    slider->setMinimum(0);
    slider->setMaximum(100);
    spinBox->setMinimum(0);
    spinBox->setMaximum(100);

    auto layout = new QVBoxLayout(this);
    layout->addWidget(slider);
    layout->addWidget(spinBox);

    connectSignals();
}

MySlider::~MySlider(){}

void MySlider::connectSignals()
{
    connect(slider, &QSlider::valueChanged, this, &MySlider::onValueChanged);
    connect(spinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MySlider::onValueChanged);
}

void MySlider::disconnectSignals()
{
    disconnect(slider, &QSlider::valueChanged, this, &MySlider::onValueChanged);
    disconnect(spinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MySlider::onValueChanged);
}

void MySlider::onValueChanged(int newValue)
{
    disconnectSignals();
    slider->setValue(newValue);
    spinBox->setValue(newValue);
    connectSignals();
}

#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QWidget>
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>

class MySlider : public QWidget
{
    Q_OBJECT

public:
    MySlider(QWidget *parent = 0);
    ~MySlider();
    std::string name;
private:
    QSlider* slider;
    QSpinBox* spinBox;
    int value;

    void connectSignals();
    void disconnectSignals();
private slots:
    void onValueChanged(int newValue);
};

#endif // MYSLIDER_H

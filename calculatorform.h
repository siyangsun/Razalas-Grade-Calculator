#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H


class CalculatorForm : public QWidget
{
public:
    CalculatorForm(QWidget *parent = 0);

private slots:
    MySlider slider1 = new MySlider(this);
    MySlider slider2 = new MySlider(this);
    MySlider slider3 = new MySlider(this);
    MySlider slider4 = new MySlider(this);
    MySlider slider5 = new MySlider(this);
    MySlider slider6 = new MySlider(this);
    MySlider slider7 = new MySlider(this);
    MySlider slider8 = new MySlider(this);
    MySlider slider_mt1 = new MySlider(this);
    MySlider slider_mt2 = new MySlider(this);
    MySlider slider_final = new MySlider(this);


private:
    Ui::CalculatorForm ui;

};

#endif // CALCULATORFORM_H

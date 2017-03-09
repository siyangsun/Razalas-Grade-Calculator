#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include <QMainWindow>

namespace Ui {
    class CalculatorForm;
}

class CalculatorForm : public QMainWindow
{
    Q_OBJECT
public:
    CalculatorForm(QWidget *parent = 0);
    ~CalculatorForm();

signals:
    void compute_overall();

public slots:
    void update_overall(int);


private:
    Ui::CalculatorForm *ui;

};

#endif // CALCULATORFORM_H

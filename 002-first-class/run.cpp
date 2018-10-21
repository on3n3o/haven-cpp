#include <iostream>

using namespace std;

class Calculator
{
  public:
    void setValue(double val);
    double getValue(void);
    double power(void);
    Calculator();

  private:
    double value;
};

Calculator::Calculator(void)
{
    cout << "Object is being created" << endl;
}
void Calculator::setValue(double val)
{
    value = val;
}

double Calculator::getValue(void)
{
    return value;
}
double Calculator::power(void)
{
    return value * value;
}

int main(int argc, char const *argv[])
{
    Calculator calculator;

    calculator.setValue(10.25);
    cout << "Value: " << calculator.getValue() << " Power: " << calculator.power();
    return 0;
}

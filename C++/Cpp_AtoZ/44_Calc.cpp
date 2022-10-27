#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};
class ScientificCalculator
{
protected:
    int a, b;

public:
    void getData()
    {
        cout << endl
             << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of pow(a, 3) is " << pow(a, 3) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl
             << endl;

        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of pow(b, 3) is " << pow(b, 3) << endl;
        cout << "The value of exp(b) is " << exp(b) << endl;
        cout << "The value of tan(b) is " << tan(b) << endl
             << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void SimpleCalcDisplay()
    {
        SimpleCalculator::getData();
        SimpleCalculator::performOperation();
    }
    void SciCalcDisplay()
    {
        ScientificCalculator::getData();
        ScientificCalculator::performOperation();
    }
};
int main()
{
    HybridCalculator calc;
    calc.SimpleCalcDisplay();
    calc.SciCalcDisplay();
    return 0;
}
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

class SimpleCalculator
{
private:
    int ch;

protected:
    int a, b;

public:
    SimpleCalculator();
    ~SimpleCalculator();
    void setValue(float v1, float v2)
    {
        a = v1;
        b = v2;
    }
    void simpmenu()
    {
        cout << endl
             << "Menu for Simple Calculator" << endl;
        cout << "1. Add" << endl
             << "2. sub" << endl
             << "3. Mul" << endl
             << "4. div" << endl;
        cout << "Enter operation number : ";
        cin >> ch;
    }
    void operations()
    {

        switch (ch)
        {
        case 1:
            cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
            break;
        case 2:
            cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
            break;
        case 3:
            cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
            break;
        case 4:
            cout << "Division of " << a << " and " << b << " is " << a / b << endl;
            break;
        default:
            cout << "Enter valid choice !!!";
            break;
        }
    }
};

SimpleCalculator::SimpleCalculator()
{
}

SimpleCalculator::~SimpleCalculator()
{
}

class ScientificCalculator : public SimpleCalculator
{
private:
    int ch;

protected:
public:
    void Scimenu()
    {
        cout << endl
             << "Menu for Scientific Calculator" << endl;
        cout << "1. Absolute" << endl
             << "2. Square root" << endl
             << "3. Cube root" << endl
             << "4. log10" << endl;
        cout << "Enter operation number : ";
        cin >> ch;
    }
    void operations()
    {
        switch (ch)
        {
        case 1:
            cout << "Absolute of " << a << " and " << b << " is " << abs(a) << " & " << abs(b) << endl;
            break;
        case 2:
            cout << "Square root of " << a << " and " << b << " is " << sqrt(a) << " & " << sqrt(b) << endl;
            break;
        case 3:
            cout << "Cube root of " << a << " and " << b << " is " << cbrt(a) << " & " << cbrt(b) << endl;
            break;
        case 4:
            cout << "log10 of " << a << " and " << b << " is " << log10(a) << " & " << log10(b) << endl;
            break;
        default:
            cout << "Enter valid choice !!!";
            break;
        }
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
private:
public:
    void display()
    {
        SimpleCalculator simpobj;
        simpobj.setValue(10, 20);
        simpobj.simpmenu();
        simpobj.operations();

        ScientificCalculator obj;
        obj.setValue(10, 20);
        obj.Scimenu();
        obj.operations();
    }
};

int main()
{
    HybridCalculator obj;
    obj.display();
    return 0;
}

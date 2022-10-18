#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // parameterized constructor (constructor with parameters)
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // implicit constructor call
    Complex o1(1, 2);
    o1.printNumber();

    // explicit constructor call
    Complex o2 = Complex(12, 3);
    o2.printNumber();
    return 0;
}

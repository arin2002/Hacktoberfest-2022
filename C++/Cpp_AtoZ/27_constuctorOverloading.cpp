#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        cout << "I am parameterized Constructor with two argc !" << endl;
        a = x;
        b = y;
    }

    Complex(int x)
    {
        cout << "I am parameterized Constructor with one argc !" << endl;
        a = x;
        b = 0;
    }

    Complex()
    {
        a = 0;
        b = 0;
        cout << "I am default Constructor !" << endl;
    }

    void printComplex()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl
             << endl;
    }
};
int main()
{
    cout << "Constructor Overloading !!!" << endl
         << endl;

    Complex o1(2, 4);
    o1.printComplex();

    Complex o2(6);
    o2.printComplex();

    Complex o3;
    o3.printComplex();

    getch();
    return 0;
}

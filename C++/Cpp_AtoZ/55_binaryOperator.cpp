#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{
private:
    int x, y;

public:
    Complex(int x = 0, int y = 0) : x(x), y(y) {}
    Complex operator+(const Complex &rhs)
    {
        Complex c3;
        c3.x = rhs.x + x;
        c3.y = rhs.y + y;
        return c3;
    }

    Complex operator-(const Complex &rhs)
    {
        Complex c4;
        c4.x = x - rhs.x;
        c4.y = y - rhs.y;
        return c4;
    }
    void display()
    {
        cout << "The number is " << x << " + " << y << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 6);
    c1.display();
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();

    Complex c4 = c1 - c2;
    c4.display();
    return 0;
}
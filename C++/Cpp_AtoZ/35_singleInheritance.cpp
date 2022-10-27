#include <iostream>
#include <conio.h>

using namespace std;
class Base
{
    int a; // private by default not inheritable
public:
    int b; // public inheritable
    void setData();
    int getA();
    int getB();
};
void Base ::setData(void)
{
    a = 10;
    b = 20;
}
int Base::getA()
{
    return a;
}
int Base::getB()
{
    return b;
}

class Derived : public Base
{
    int c;

public:
    void process();
    void display();
};
void Derived::process()
{
    c = b * getA();
}
void Derived::display()
{
    cout << "Value of a is " << getA() << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.display();
    der.process();
    der.display();

    return 0;
}

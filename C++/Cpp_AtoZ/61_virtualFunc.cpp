#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
    int _base = 2;
    virtual void display()
    {
        cout << "The value of _base is " << _base << endl;
    }
};

class Derived : public Base
{
public:
    int _derived = 2;
    void display()
    {
        cout << "The value of _base is " << _base << endl;
        cout << "The value of _derived is " << _derived << endl;
    }
};

int main()
{
    Base *p_b, b;
    Derived d;

    p_b = &d;
    p_b->display();

    return 0;
}
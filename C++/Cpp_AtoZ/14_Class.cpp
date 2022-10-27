#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
private: // only fuction inside the class can access this data
    int a, b, c;

public: // whole program can access this data
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void MyClass::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    MyClass e1;
    e1.d = 123;
    e1.e = 999;
    e1.setData(1, 23, 43);
    e1.getData();
    return 0;
}

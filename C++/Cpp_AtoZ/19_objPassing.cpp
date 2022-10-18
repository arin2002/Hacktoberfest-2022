#include <iostream>
#include <conio.h>

using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2);
    void getData();
    void sumOfData(complex o1, complex o2);
};

void complex::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complex::getData()
{
    cout << "complex number is " << a << " + " << b << "i" << endl;
}

void complex::sumOfData(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int main()
{
    complex c1, c2, c3;

    c1.setData(2, 4);
    c1.getData();

    c2.setData(3, 2);
    c2.getData();

    c3.sumOfData(c1, c2);
    c3.getData();

    return 0;
}

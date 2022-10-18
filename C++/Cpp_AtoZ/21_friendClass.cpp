#include <iostream>
#include <conio.h>

using namespace std;

class complex;
class calculator
{
public:
    int SumComplex(complex, complex);
    int add(int a, int b);
    int sumImgComplex(complex, complex);
};
class complex
{
    int a, b;
    friend class calculator;

public:
    void setData(int n1, int n2);
    void getData();
};

void complex::setData(int n1, int n2)
{
    a = n1;
    b = n2;
}
void complex::getData()
{
    cout << "The number is " << a << " + " << b << "i" << endl;
}

int calculator::SumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::add(int a, int b)
{
    return (a + b);
}

int calculator::sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;

    c1.setData(2, 3);
    c1.getData();
    c2.setData(4, 5);
    c2.getData();

    calculator calc;
    int res = calc.SumComplex(c1, c2);
    cout << "the sum of real part of c1 ad c2 is " << res << endl;

    int addRes = calc.add(2, 3);
    cout << "the addition of 2 and 3 is " << addRes << endl;

    int imgRes = calc.sumImgComplex(c1, c2);
    cout << "the sum of imaginary part of c1 ad c2 is " << imgRes << endl;
    return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{
    int real, imag;

public:
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getData()
    {
        cout << "The real part is " << real;
        cout << " The imaginary part is " << imag << endl;
    }
};
int main()
{
    // Complex c;
    // Complex *ptr = &c;
    // Complex *ptr = new Complex;
    // // (*ptr).setData(12, 2);
    // ptr->setData(12, 2);
    // (*ptr).getData();

    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 2);
    (ptr1 + 1)->setData(7, 5);
    (ptr1 + 2)->setData(99, 96);
    (ptr1 + 3)->setData(21, 90);

    for (int i = 0; i < 4; i++)
    {
        (ptr1 + i)->getData();
    }

    return 0;
}

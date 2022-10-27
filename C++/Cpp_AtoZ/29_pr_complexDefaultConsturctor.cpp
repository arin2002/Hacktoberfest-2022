#include <iostream>
#include <conio.h>

using namespace std;

class Complex
{
    int a, b, c;

public:
    Complex(void)
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y = 12)
    {
        a = x;
        b = y;
    }
    Complex(int x, int y, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }
    void printData(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex o1;
    o1.printData();

    Complex o2(1);
    o2.printData();

    Complex o3(12, 23, 12);
    o3.printData();

    return 0;
}

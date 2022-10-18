#include <iostream>
#include <conio.h>

using namespace std;

int product(int a, int b)
{
    return a * b;
}

int product(int a, int b, int c)
{
    return a * b * c;
}
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;

    cout << "The product of a & b is " << product(a, b) << endl;
    cout << "The product of a, b & c is " << product(a, b, c) << endl;
    return 0;
}

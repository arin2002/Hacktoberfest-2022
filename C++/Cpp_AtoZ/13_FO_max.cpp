#include <iostream>
#include <conio.h>

using namespace std;

void max(int a, int b)
{
    if (a > b)
        cout << a << " is greater than " << b << endl;
    else
        cout << b << " is greater than " << a << endl;
}

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    a = 100;
    b = 123;
    c = 243;

    max(a, b);
    cout << "the max of these is " << max(a, b, c) << endl;
    return 0;
}

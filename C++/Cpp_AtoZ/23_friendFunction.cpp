#include <iostream>
#include <conio.h>

using namespace std;

class Y;
class X
{
    int num1;
    friend void swapNum(X &, Y &);

public:
    void getNum(int x)
    {
        num1 = x;
    }
    void showNum()
    {
        cout << "value of num1 " << num1 << endl;
    }
};

class Y
{
    int num2;

public:
    void getNum(int x)
    {
        num2 = x;
    }
    void showNum()
    {
        cout << "value of num2 " << num2 << endl;
    }
    friend void swapNum(X &, Y &);
};

void swapNum(X &o1, Y &o2)
{
    int temp = o1.num1;
    o1.num1 = o2.num2;
    o2.num2 = temp;
    cout << endl
         << "After swapping of values " << endl;
}

int main()
{
    X o1;
    Y o2;

    o1.showNum();

    o1.getNum(10);
    o1.showNum();

    o2.getNum(20);
    o2.showNum();

    swapNum(o1, o2);
    o1.showNum();
    o2.showNum();

    return 0;
}

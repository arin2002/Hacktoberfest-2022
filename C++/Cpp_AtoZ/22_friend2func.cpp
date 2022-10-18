#include <iostream>
#include <conio.h>

using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    friend int add(X o1, Y o2);
};

class Y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend int add(X o1, Y o2);
};

int add(X o1, Y o2)
{
    return (o1.data + o2.data);
}

int main()
{
    X o1;
    Y o2;

    o1.setValue(10);
    o2.setValue(20);

    int res = add(o1, o2);
    cout << "the addition of values is " << res << endl;
    return 0;
}

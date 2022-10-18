#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
private:
public:
    int a;
    MyClass()
    {
        a = 0;
    }
    MyClass(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "data is " << a << endl;
    }
};

class NewClass : MyClass
{
private:
    int b;

public:
    NewClass(int y)
    {
        b = y;
    }
    void show()
    {
        cout << "data is " << b << endl;
        cout << "addition of a and b is " << a + b << endl;
    }
};

int main()
{
    MyClass obj(2);
    obj.show();

    NewClass obj2(4);
    obj2.show();
    return 0;
}

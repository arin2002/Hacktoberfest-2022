#include <iostream>
#include <conio.h>

using namespace std;

class B
{
public:
    void say()
    {
        cout << "hello World" << endl;
    }
};
class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello My Babe" << endl;
    }
};
int main()
{
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}
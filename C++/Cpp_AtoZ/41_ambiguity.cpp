#include <iostream>
#include <conio.h>

using namespace std;

class Base1
{
private:
    int a;

public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};

class Base2
{
private:
    int b;

public:
    void greet()
    {
        cout << "Kasa aahes? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int c;

public:
    void greet()
    {
        Base1::greet();
        Base2::greet();
    }
};
int main()
{
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();

    Derived d;
    d.greet();
    return 0;
}

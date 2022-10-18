#include <iostream>
#include <conio.h>

/*
    For a protected Member:
                            public Derivation   private Derivation   Protected Derivation
        1. private member       not inherited       not inherited        not inherited
        2. public member        public              private              protected
        3. protected member     protected           private              protected
*/

using namespace std;

class Base
{
private:
    int b = 0;

protected:
    int a = 0;

public:
};

class Derived : public Base
{
private:
protected:
public:
};
int main()
{
    Base b1;
    Derived d;
    // cout << d.b; will not run
    return 0;
}

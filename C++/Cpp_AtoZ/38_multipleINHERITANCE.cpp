#include <iostream>
#include <conio.h>

using namespace std;

class A
{
protected:
    int a;

public:
    void seta(int a1)
    {
        a = a1;
    }
};
class B
{
protected:
    int b;

public:
    void setb(int b1)
    {
        b = b1;
    }
};
class C : public A, public B
{
protected:
    int c;

public:
    void setc(int c1)
    {
        c = c1;
    }
    int product()
    {
        return a * b * c;
    }
    void display(void)
    {
        cout << "The value of A is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The Addition is " << a + b + c << endl;
        cout << "The product of a*b*c is " << product() << endl;
    }
};
int main()
{
    C obj;
    obj.seta(2);
    obj.setb(4);
    obj.setc(2);
    obj.display();
    return 0;
}
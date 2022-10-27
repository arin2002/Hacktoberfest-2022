#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void getx()
    {
        cout << "enter value of x: \n";
        cin >> x;
    }
};
class B
{
public:
    int y;
    void gety()
    {
        cout << "enter value of y: \n";
        cin >> y;
    }
};
class C : public A, public B
{
public:
    void fun()
    {
        cout << "\nSum = " << x + y;
    }
};

int main()
{
    C obj;
    obj.getx();
    obj.gety();
    obj.fun();
    return 0;
}
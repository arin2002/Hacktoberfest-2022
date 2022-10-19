#include <iostream> //multiple inheritance
using namespace std;
class A
{
public:
    void printX()
    {
        cout << "function of class A" << endl;
    }
};
class B
{
public:
    void printX()
    {
        cout << "function of class B";
    }
};
class C : public A, public B
{
};
int main()
{
    C c;
    c.A::printX();
    c.B::printX();
    return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

class A
{
    int a;

protected:
public:
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a; // priority is give to the local variable
        // return *this;
    }
    void getData(void)
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    // a.setData(4).getData(); // implicit invoke
    a.getData(); // explicit invoke
    return 0;
}

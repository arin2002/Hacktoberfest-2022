#include <iostream>
#include <conio.h>

using namespace std;

class Test
{
private:
    int *x;

public:
    Test(int val = 0) : x(new int(val)) {}
    ~Test();
    void setX(int val) { *x = val; }
    void print()
    {
        cout << "output: " << *x << endl;
    }
    Test &operator=(const Test &rhs)
    {
        if (this != &rhs)
            *x = *rhs.x;
        return *this;
    }
};

Test::~Test()
{
}

int main()
{
    Test t1(10);
    Test t2;
    t2 = t1;
    t1.setX(20);
    t1.print();
    t2.print();

    return 0;
}

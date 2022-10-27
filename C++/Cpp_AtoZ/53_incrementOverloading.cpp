#include <iostream>
#include <conio.h>

using namespace std;

class Salary
{
private:
    int sal;

public:
    Salary(int sal) : sal{sal} {}

    int operator++(int)
    {
        cout << "in operator function" << endl;
        ++sal;
    }

    int operator++()
    {
        sal++;
    }

    void Display()
    {
        cout << "Salary is " << sal << endl;
    }

    int operator--()
    {
        --sal;
    }
    int operator--(int)
    {
        --sal;
    }
};

int main()
{
    Salary s(1000);
    s.Display();

    ++s;
    s.Display();

    s++;
    s.Display();

    --s;
    s.Display();

    s--;
    s.Display();

    return 0;
}

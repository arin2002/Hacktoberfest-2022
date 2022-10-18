#include <iostream>
#include <conio.h>

using namespace std;

class Simple
{
private:
    int a;

public:
    Simple(int a = 0) : a(a) {}
    void display(void)
    {
        cout << "a: " << a << endl;
    }

    int operator-()
    {
        int *p = &a;
        a = -(*p);
        return (a);
    }
};

int main()
{
    Simple s(8);
    s.display();

    -s;
    s.display();

    // Simple s2 = -s;
    // s2.display();
    return 0;
}
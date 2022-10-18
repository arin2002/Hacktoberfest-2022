#include <iostream>
#include <conio.h>

using namespace std;
/*
    Initialization list & initialization section

    constructor(argument-list) : initialization-section
    {

    }
*/

class init
{
private:
    int a, b;

public:
    // init(int i, int j) : a(i), b(j)
    // init(int i, int j) : a(i), b(i + j)
    // init(int i, int j) : a(i), b(3 * j)
    // init(int i, int j) : a(i), b(a * j)
    // init(int i, int j) : b(j), a(i * b) // err will not come | a initialise first a will be initialise first
    init(int i, int j) : a(i), b(a * j)
    {
        // constructor body
        cout << "I am in constructor" << endl;
        cout << "value of a " << a << endl;
        cout << "value of b " << b << endl;
    }
};

int main()
{
    init obj(2, 3);
    return 0;
}

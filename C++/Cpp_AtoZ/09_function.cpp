#include <iostream>
#include <conio.h>

using namespace std;

int sum(int a, int b); // function declare
void g(void);

int main()
{
    int num1, num2;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;

    cout << "The sum is " << sum(num1, num2) << endl; // function call
    g();
    return 0;
}

int sum(int a, int b) // function defined
{
    //
    int c = a + b;
    return c;
}

void g()
{
    cout << "Iam kunal" << endl;
}

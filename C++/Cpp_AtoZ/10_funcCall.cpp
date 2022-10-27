#include <iostream>
#include <conio.h>

using namespace std;

int sum(int a, int b)
{
    int c = a + b;
}

// this will not  swap actually
void swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

void swapPointer(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void swapReference(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is " << sum(a, b) << endl;
    cout << "The value of a is " << a << " & b is " << b << endl;
    cout << "After swapping " << endl;
    // swap(a, b); this will not actually swap a & b
    // swapPointer(&a, &b);
    swapReference(a, b);
    cout << "The value of a is " << a << " & b is " << b << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // pointer : pointer is a data type which holds the address of other data types

    // int a = 3;
    // int *b = &a;
    // /*/ & ---> Addressing operator (address of)
    //  * ---> Dereferencing operator (value at) */

    // cout << "The address of a is " << &a << endl; // address of a
    // cout << "The value of b is " << b << endl;    // value of b
    // cout << "The value at b is " << *b << endl;   // value at b
    // cout << "The address of b is " << &b << endl; // address of b

    // // pointer to pointer
    // int **c = &b;
    // cout << "The address of b is " << &b << endl;
    // cout << "The value of address c is " << c << endl;
    // cout << "The value at address c is " << *c << endl;
    // cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    int x = 10;
    int *y = &x;
    int **z = &y;

    cout << "the value of x is (x) " << x << endl;
    cout << "The address of x is (&x)" << &x << endl
         << endl;

    cout << "the value of address y is (y) " << y << endl;
    cout << "the address of address y is (&y) " << &y << endl;
    cout << "The value at address y is (*y) " << *y << endl
         << endl;

    cout << "the value of z is (z) " << z << endl;
    cout << "the value at address z is (*z) " << *z << endl;
    cout << "the value at(value at(z)) is (**z) " << **z << endl;
}

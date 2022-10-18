#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int a = 4;
    int *ptr = &a;

    *ptr = 999;
    cout << "the value of a is " << a << endl;
    cout << "the value of &a is " << &a << endl;
    cout << "the value of ptr is " << ptr << endl;
    cout << "the value of *ptr is " << *ptr << endl;
    cout << "the value of &ptr is " << &ptr << endl;

    int *p = new int(34);
    cout << "the value at address p is " << *(p) << endl;
    cout << "the value at address p is " << p << endl;

    delete p;

    int *pp = new int(a);
    cout << "value at pp " << *pp << endl;

    int *arr = new int[4];
    arr[0] = 2;
    *(arr + 1) = 4;
    arr[2] = 6;
    arr[3] = 8;

    // delete[] arr;

    for (int i = 0; i < sizeof(arr); i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    float *abc = new float('a');
    cout << "value of *abc is " << *abc << endl;

    return 0;
}

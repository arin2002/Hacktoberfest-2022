#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // An array is a collection of items of similar type stored in contiguous memory locations
    // an array start with index 0
    // array ____________________
    //      |_a_|_b_|_c_|_d_|_f_|
    //        0   1   2   3   4

    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl
         << endl;

    array[2] = 'j'; // changing the values of array (elements)

    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl
         << endl;

    // Accessing array using loop

    for (int i = 0; i < 5; i++)
    {
        cout << "The value of array[" << i << "] is " << array[i] << endl;
    }

    cout << endl;

    int i = 0;
    while (i < 5)
    {
        cout << "The value of array[" << i << "] is " << array[i] << endl;
        i++;
    }

    cout << endl;

    i = 0;
    do
    {
        cout << "The value of array[" << i << "] is " << array[i] << endl;
        i++;
    } while (i < 5);

    cout << endl;

    return 0;
}

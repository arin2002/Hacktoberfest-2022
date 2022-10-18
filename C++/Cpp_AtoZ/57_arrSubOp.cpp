/*
    Overloading [] operator in c++ (Array Subscript Operator)

    Points:
        1. Array subscript Operator can not be used to chk out of bound classes.
        2. Array Subscript operator can not be friend fuction and others too ( -> , () , = )
*/

#include <iostream>
#include <conio.h>

using namespace std;

class Point
{
    int arr[2]; // x -> 0 , y -> 1
public:
    Point(int x = 0, int y = 0)
    {
        arr[0] = x;
        arr[1] = y;
    }
    void Print()
    {
        cout << "x: " << arr[0] << " y: " << arr[1] << endl;
    }

    int &operator[](int pos)
    {
        if (pos == 0)
        {
            return arr[0];
        }
        else if (pos == 1)
        {
            return arr[1];
        }
        else
        {
            cout << "Out of bound case. " << endl;
            exit(0);
        }

        {
            /* code */
        }
    }
};

int main()
{
    Point p1(2, 3);
    p1.Print();
    p1[0] = 11;
    p1[1] = 12;
    p1.Print();
    p1[0] = 20;
    p1.Print();
    return 0;
}
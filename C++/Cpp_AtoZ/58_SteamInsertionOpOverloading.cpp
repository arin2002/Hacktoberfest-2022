#include <iostream>
#include <conio.h>
#include <string>
/*

    Topic : << & >> Operator Overloading in c++

    << extraction operator
    >> stream insertion operator

    Points

    1. When we need overload << & >> ?
        cout << (user defined type) OR cin >> (user defined type).
    2. It can't be class member function (reason we will discuss), You have to make it friend function of your class.

*/
using namespace std;

class Test
{
    string x;

public:
    Test(string x = "0") : x(x) {}
    friend istream &operator>>(istream &input, Test &obj);
    friend ostream &operator<<(ostream &output, Test &obj);
};

istream &operator>>(istream &input, Test &obj)
{
    input >> obj.x;
    return input;
}

ostream &operator<<(ostream &output, Test &obj)
{
    output << obj.x << endl;
    return output;
}
int main()
{
    Test t;
    cin >> t;
    cout << t;
    return 0;
}

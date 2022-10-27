#include <iostream>
#include <conio.h>

using namespace std;

class complex
{
    int a, b;

public:
    void setData(int n1, int n2);
    void getData();
    friend complex sumOfComplexNum(complex o1, complex o2);
};

void complex::setData(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::getData()
{
    cout << "Your number is " << a << " + " << b << "i" << endl;
}

complex sumOfComplexNum(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(1, 4);
    c1.getData();

    c2.setData(3, 5);
    c2.getData();

    sum = sumOfComplexNum(c1, c2);
    sum.getData();
    return 0;
}

/*
    Properties of friend function

    1. Not in the scope of the class
    2. friend function is allowed to do anything with class members
    3. Since it is not in the scope of the class, it cannot be called from the object of that class
    4. can be invoked without the help of any object
    5. usually contains the objects as arguments
    6. can be declared inside public or private section of the class
    7. it can not access the members directly by their names and need object_name.member_name to access any member.
*/

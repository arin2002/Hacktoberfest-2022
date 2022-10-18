#include <iostream>
#include <conio.h>

using namespace std;
class Complex
{
private:
    int a, b;

public:
    /*

    Creating a constructor
        # constructor It is a special member function with the same name as of the class.
        # it is used to initialize the objects of its class.
        # It is automatically invoked whenever an object is created.

    */
    Complex(void);
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // --------> this is default constructor (no parameter)
{
    a = 0;
    b = 0;
    cout << "inside the constructor" << endl;
}

int main()
{
    Complex o1, o2, o3;

    o1.printNumber();
    o2.printNumber();
    o3.printNumber();
    o1.printNumber();
    return 0;
}

/*
    Characteristics of constructor

    1. It should be declared inside the pubic section of the class.
    2. they are automatically invoked whenever the object is created.
    3. aapan kahi pan constructor madhe lihu shakto aani te pan automatically run hoin.
    4. They cannot return values and do not have return types.
    4. It can have default arguments its called default constructor.
    6. We cannot refer to their address.
*/

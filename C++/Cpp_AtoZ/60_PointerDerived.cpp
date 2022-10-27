#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
    int base_var;
    Base()
    {
        base_var = 0;
    }
    void display()
    {
        cout << "The value of base_var is " << base_var << endl;
    }
};
class Derived : public Base
{
public:
    int Derived_var;
    Derived()
    {
        Derived_var = 0;
    }
    void display()
    {
        cout << "The value of base_var is " << base_var << endl;
        cout << "The value of derived_var is " << Derived_var << endl;
    }
};
int main()
{
    Base *basePointer, B_obj;
    Derived derivedObj;
    basePointer = &derivedObj;
    basePointer->display();
    basePointer->base_var = 90;
    basePointer->display();
    basePointer->base_var = 12345678;
    basePointer->display();

    cout << "---------------------------------------------------------------------" << endl;

    Derived *derivedPointer;
    derivedPointer = &derivedObj;
    derivedPointer->display();
    derivedPointer->base_var = 1111;
    derivedPointer->Derived_var = 22222;
    derivedPointer->display();

    cout << "---------------------------------------------------------------------" << endl;

    // derivedPointer = &B_obj;
    return 0;
}

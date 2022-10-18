#include <iostream>
#include <conio.h>

using namespace std;

class Employee
{

public:
    int empId;
    float salary;
    Employee() {}
    Employee(int id)
    {
        empId = id;
        salary = 100;
    }
};
// class {{DerivedClassName}} : {{VisibilityMode}} {{BaseClass}}
// Visibility Mode
// 1. public : public members of base class becomes public members of derived class.
// 2. private : public members of base class becomes private members of derived class.
// -------------- Private members of base class never ever inherited !!! ----------------------
//
class Programmer : Employee
{
public:
    Programmer(int id)
    {
        empId = id;
    }
    int languageCode = 9; // 9 for cpp
};
int main()
{
    Employee harry(1), sam(2);
    cout << harry.salary << endl;
    cout << sam.salary << endl;

    Programmer asdf(12);
    cout << asdf.languageCode;
    return 0;
}

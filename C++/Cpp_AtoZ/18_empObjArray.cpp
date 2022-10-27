#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Emp
{
private:
    int empNo;
    double salary;
    string empName, city, Dname;

    // fuctions
public:
    void accept()
    {
        cout << endl
             << "Enter your EmpNo : ";
        cin >> empNo;

        cout
            << "Enter your name : ";
        cin >> empName;

        cout
            << "Enter your Salary : ";
        cin >> salary;

        cout
            << "Enter your department : ";
        cin >> Dname;

        cout
            << "Enter your working city : ";
        cin >> city;
    }

    void display()
    {
        cout
            << "Emp no : " << empNo << endl;
        cout << "Emp Name : " << empName << endl;
        cout << "Emp salary : " << salary << endl;
        cout << "Emp city : " << city << endl;
        cout << "Emp Department : " << Dname << endl;
    }

    Emp();
    ~Emp();
};

Emp::Emp()
{
}

Emp::~Emp()
{
}

int main()
{
    Emp empDetails[3];

    for (int i = 0; i < 3; i++)
    {
        empDetails[i].accept();
        cout << endl
             << "Employee number is " << i + 1 << endl;
        empDetails[i].display();
    }

    return 0;
}

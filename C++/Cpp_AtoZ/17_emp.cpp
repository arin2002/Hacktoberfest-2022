#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Emp
{
private:
    int empId;
    string empName;
    int empSalary;
    static int counter;

public:
    void getData();
    void display();
    static void getCounter(void);
};
void Emp::getData()
{
    cout << endl
         << "Enter emp id: ";
    cin >> empId;
    cout << endl
         << "Enter emp Name: ";
    cin >> empName;
    cout << endl
         << "Enter emp salary: ";
    cin >> empSalary;
    cout << endl
         << "----------------------------------" << endl
         << endl;
    counter++;
}
void Emp::display()
{
    cout << "Employee number is ---------> " << counter << endl;
    cout << "Employee Id is: " << empId << endl;
    cout << "Employee Name is: " << empName << endl;
    cout << "Employee Salary is: " << empSalary << endl;
    cout << "___________________________________" << endl
         << endl;
}
int Emp::counter; // default value is zero
// counter is static data member of class emp
void Emp::getCounter(void)
{
    cout << "the counter is " << counter << endl;
}
int main()
{
    Emp Kunal, Harry, Alice;

    Kunal.getData();
    Kunal.display();
    Kunal.getCounter();

    Harry.getData();
    Harry.display();
    Harry.getCounter();

    Alice.getData();
    Alice.display();
    Alice.getCounter();

    getch();
    return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;
typedef struct emp
{
    int eid;
    char favChar;
    double salary;
} ep;

int main()
{
    ep kunal;
    kunal.eid = 1;
    kunal.favChar = 'k';
    kunal.salary = 12000.612;

    cout << kunal.eid << endl;
    cout << kunal.favChar << endl;
    cout << kunal.salary << endl;

    struct emp om;
    om.eid = 2;
    om.favChar = 'o';
    om.salary = 130000.712;

    cout << om.eid << endl;
    cout << om.favChar << endl;
    cout << om.salary << endl;
    return 0;
}

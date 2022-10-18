/*  Destructor never takes an argument and does not return any value
    automatically called by compiler implicitly
*/

#include <iostream>
#include <conio.h>

using namespace std;
int count = 0;

class Num
{

public:
    Num()
    {
        count++;
        cout << "Constructor is called. count is " << count << endl;
    }
    ~Num()
    {
        count--;
        cout << "Destructor is called. count is " << count << endl;
    }
};

int main()
{
    cout << "Main function is started !" << endl;
    Num obj;
    cout << "inside main function above obj" << endl;
    {
        cout << "I am inside the nested block" << endl;
        Num o;
        cout << "obj created and exiting this block" << endl;
    }
    cout << "back to main " << endl;
    return 0;
}

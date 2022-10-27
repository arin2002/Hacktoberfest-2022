#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 0;
    try
    {
        if (a == 0)
        {
            throw 1;
        }
    }
    catch (int e)
    {
        cout << "value is 0";
    }

    return 0;
}

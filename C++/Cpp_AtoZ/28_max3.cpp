#include <iostream>
#include <conio.h>

using namespace std;

class MaxNum
{
    float a, b, c;

public:
    MaxNum()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    MaxNum(int x, int y, int z)
    {
        cout << endl
             << endl
             << "int" << endl;
        a = x;
        b = y;
        c = z;
    }
    MaxNum(float x, float y, float z)
    {
        cout << endl
             << endl
             << "float" << endl;
        a = x;
        b = y;
        c = z;
    }
    MaxNum(double x, double y, double z)
    {
        cout << endl
             << endl
             << "double" << endl;
        a = x;
        b = y;
        c = z;
    }

    void findMax()
    {
        if (a > b && a > c)
        {
            cout << "Max is " << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Max is " << b << endl;
        }
        else
        {
            cout << "Max is " << c << endl;
        }
    }
};
int main()
{
    MaxNum o1;
    o1.findMax();

    MaxNum o2(2, 3, 5);
    o2.findMax();

    MaxNum o3(2.4f, 55.4f, 344.4f);
    o3.findMax();

    MaxNum o4(12.2232, 123.2222, 213.222);
    o4.findMax();
    return 0;
}

/*
    Constructor ha aka object che memory dusraya object la assign karto

        1. When there is no copy constructor found compiler supplies its own copy constructor
        2. jar object ha pahilya pasun banaclela asel tar copy constructor ha call honar nahi
*/
#include <iostream>
#include <conio.h>

using namespace std;

class MyNum
{
    int data;

public:
    MyNum()
    {
        data = 0;
    }
    MyNum(int n)
    {
        data = n;
    }
    MyNum(MyNum &n)
    {
        cout << "copyConstructorCalled !!!" << endl;
        data = n.data;
    }

    // function
    void show(void)
    {
        cout << "The value of data is " << data << endl;
    }
};
int main()
{
    MyNum n1, n2(12), n3;
    n1.show();
    n2.show();
    n3 = n2;
    n3.show();
    MyNum neww = n2;
    neww.show();
    return 0;
}

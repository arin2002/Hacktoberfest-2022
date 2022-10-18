#include <iostream>
#include <conio.h>

using namespace std;

class Simple
{
private:
    int data1, data2, data3;

public:
    Simple(int a, int b, int c);
    ~Simple();
    void printData();
};

Simple::Simple(int a, int b = 9, int c = 0)
{
    data1 = a;
    data2 = b;
    data3 = c;
}

void Simple::printData(void)
{
    cout << "value of variables is  is " << data1 << "," << data2 << " and " << data3 << endl;
}
Simple::~Simple()
{
}

int main()
{
    Simple s(1.234);
    s.printData();

    return 0;
}

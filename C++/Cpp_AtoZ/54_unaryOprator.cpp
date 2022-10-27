#include <iostream>
#include <conio.h>

using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(x) {}

    void print()
    {
        cout << "x: " << x << " y: " << y << endl;
    }

    Point operator-()
    {
        return Point(-x, -y);
    }
};

int main()
{
    Point p1(1, 2), p2;
    p1.print();
    p2.print();
    Point p3 = -p1;
    p3.print();
    return 0;
}

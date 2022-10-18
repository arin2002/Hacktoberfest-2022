#include <iostream>
#include <conio.h>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x{x}, y{y} {}
    Point operator+(const Point &rhs)
    {
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }

    Point operator-(const Point &rhs)
    {
        Point p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;
        return p;
    }
    Point operator*(const Point &rhs)
    {
        Point p;
        p.x = x * rhs.x;
        p.y = y * rhs.y;
        return p;
    }
    Point operator/(const Point &rhs)
    {
        Point p;
        p.x = x / rhs.x;
        p.y = y / rhs.y;
        return p;
    }
    void display(void)
    {
        cout << " x: " << x << " y: " << y << endl;
    }
};

int main()
{
    int a = 12;
    int b = 10;
    int c = a + b;
    cout << c << endl;

    Point p1(4, 8), p2(2, 4);
    // 1, 2
    // 3, 4
    Point p3 = p1 + p2;
    p3.display();

    p3 = p1 - p2;
    p3.display();

    p3 = p1 * p2;
    p3.display();

    p3 = p1 / p2;
    p3.display();

    return 0;
}

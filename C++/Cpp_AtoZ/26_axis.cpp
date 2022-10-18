// Create a function which takes 2 points object and compute the distance between those point.
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class point2;

class point1
{
    int x1, y1;

public:
    point1(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void displayPoint()
    {
        cout << "The point1 is (" << x1 << "," << y1 << ")." << endl;
    }
    friend void distancePoint(point1, point2);
};

class point2
{
    int x2, y2;

public:
    point2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    void displayPoint()
    {
        cout << "The point2 is (" << x2 << "," << y2 << ")." << endl;
    }
    friend void distancePoint(point1, point2);
};

void distancePoint(point1 p1, point2 p2)
{
    int res;
    int x = p2.x2 - p1.x1;
    int y = p2.y2 - p1.y1;
    res = sqrt((x * x) + (y * y));
    cout << "The distance between Point 1 to Point 2 is " << res << endl;
}
int main()
{
    point1 p1(1, 0);
    p1.displayPoint();

    point2 p2(70, 0);
    p2.displayPoint();

    distancePoint(p1, p2);

    return 0;
}

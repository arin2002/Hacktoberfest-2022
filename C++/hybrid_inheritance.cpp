#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void area() = 0;
};
class Triangle : public Shape
{
public:
    void area()
    {
        cout << "area of Triangle" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "area of rectangle" << endl;
    }
};
class AreaOfThings : public Rectangle, public Triangle
{
public:
    void area()
    {

        Rectangle::area();
        Triangle::area();
    }
};
int main()
{
    AreaOfThings a;
    a.area();
    return 0;
}
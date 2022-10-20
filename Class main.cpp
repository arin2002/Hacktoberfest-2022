#include "Rectangle.h"
#include <iostream>
using namespace std;

// for const members intialize with list initializer as :
Rectangle::Rectangle() : length(0), width(0)
{
	cout << "Constructor is called !\n";
}
Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
	cout << "Parametrized constructor is called !\n";
}
Rectangle::~Rectangle()
{
	cout << "Destructor is called !";
}
void Rectangle::setLength(double l)
{
	length = l;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getLength()const
{
	return length;
}
double Rectangle::getWidth()const
{
	return width;
}
double Rectangle::getArea()const
{
	return width * length;
}
double Rectangle::getPerimeter()const
{
	return 2 * (width + length);
}
void Rectangle::draw()const
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

int main()

{
	double l, w;
	cout << "Enter length : ";
	cin >> l;
	cout << "Enter width : ";
	cin >> w;
	Rectangle a(l, w);//implicit call
	Rectangle& adrs = a;
	//or(pointer)Rectangle *p=&a then p->getArea();
	adrs.setLength(l);
	adrs.setWidth(w);
	cout << "Area = " << a.getArea();
	cout << "\n";
	cout << "Perimeter = " << a.getPerimeter();
	cout << "\n";
	adrs.draw();
	return 0;

}

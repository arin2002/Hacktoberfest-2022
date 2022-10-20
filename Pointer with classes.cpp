#include<iostream>
using namespace std;
class Rectangle{
public:
	int *length=0;
	int width=2;
	Rectangle() {
		cout << "\nConstructer is called \n";
	}
	~Rectangle() {
		cout << "\nDestructer is called ";
	}
};
int main()
{
	Rectangle a;
	int x = 3;
	a.length = &x;
	cout<<"Product = "<<(*a.length)* (a.width);
	return 0;
}

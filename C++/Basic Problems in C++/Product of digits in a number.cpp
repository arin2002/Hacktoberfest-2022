
//product of number of digits in a number
#include <iostream>
using namespace std;
int main()
{
	long long int x, r, product = 1, count = 0;
	cout << "Enter number =";
	while (!(cin >> x))
	{
		cout << "ERROR! Number is invalid.\nEnter a number again.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	while (x != 0)
	{
		r = x % 10;
		x = x / 10;
		product*=r;
		count = count + 1;
	}
	cout <<"\nNumber of digits=" <<count;
	cout <<"\nProduct of digits=" <<product;
	
}
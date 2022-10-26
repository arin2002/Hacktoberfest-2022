#include<iostream> 

//  Armstrong number is a number that is equal to the sum of cubes of its digits. 

using namespace std;

int main()
{
	int n,r,i,t,sum=0;
	cout <<"enter no. " << endl;
	cin >> n;
	t =n;

	while(n!=0)
	{
		r = n%10;
		sum = sum + r*r*r;
		n = n/10;
	}

	if(sum == t)
	{
		cout << "Armstrong No. "<< endl;
	}
	else
	{
		cout << "Not an Armstrong No. "<< endl;
	}
	return 0;
}

#include<iostream> 

using namespace std;

int main()
{
	int n,i,j;
	cout << "enter no." << endl;
	cin >> n;
	cout << "Prime Numbers Between 1 and " << n << " are  " ;

	for(i=2; i<n; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				cout << "" ;
				break;
			}
		}
			if(j==i)
			{
				cout << j << " " ;
			}
	}
	cout << endl;
	return 0;
}

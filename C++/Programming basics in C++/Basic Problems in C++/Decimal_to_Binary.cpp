

#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
	
	int binaryNum[32];

	
	int i = 0;
	while (n > 0) {

	
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}


int main()
{
	int n ;
	cin>>n;
	decToBinary(n);
	return 0;
}

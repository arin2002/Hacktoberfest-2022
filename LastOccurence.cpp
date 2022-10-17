//Program to Find the last occurence of value in a array

#include<iostream>
using namespace std;
int main()
{
	int indexOfValue = 0;
	int n;
	cout << "Enter the size of the array" << endl;
	cin >> n;
	int search;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the Elements in array at index " << i + 1 << endl;
		cin >> *(arr + i);
	}
	cout << "Enter the value to be searched in array" << endl;
	cin >> search;

	for(int i=n-1;i>=0;i--)
	{
		if (search == arr[i])
		{
			indexOfValue = i;
			break;
		}
	}
	cout << "The last occurence of Value is at index " << indexOfValue << endl;

	delete[]arr;
	arr = nullptr;


}
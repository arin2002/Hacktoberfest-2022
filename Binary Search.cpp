#include<iostream>
using namespace std;
void Insertion_Sort(int* arr, const int& size)
{
	int mini_index, mini;
	for (int i = 0; i < size; i++)
	{
		mini = arr[i];
		mini_index = i;
		for (int j = i+1; j < size; j++)
		{
			if (mini > arr[j])
			{
				mini = arr[j];
				mini_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[mini_index];
		arr[mini_index] = temp;
	}
}
int Binary_Search(const int* arr, const int& size, const int key)
{
	int start = 0, end = size;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else if (key < arr[mid])
		{
			end = mid - 1;
		}
		else if (key == arr[mid])
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int size;
	cout << "How many numbers you want to enter?" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter Numbers: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	Insertion_Sort(arr, size);
	int key;
	cout << "Enter any Number you want to search: ";
	cin >> key;
	cout << "Sorted Array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int index = Binary_Search(arr, size, key);
	if (index == -1)
	{
		cout << "Error: Not Found!" << endl;
	}
	else
	{
		cout << key << " is found in Array on Index: "<<index << endl;
	}
}
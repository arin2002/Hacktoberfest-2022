#include <iostream>
using namespace std;
int arr[1000], n=0;

void insertAge(int age, int k)
{
	int root;
	while (k > 0)
	{
		root = (k - 1) / 2;
		if (age >= arr[root])
		{
			arr[k] = age;
			return;
		}
		arr[k] = arr[root];
		k = root;
	}			 
	arr[0] = age; 
} 

void deleteAge(int age)
{
	int left, right, i, temp, root;

	for (i = 0; i < n; i++)
	{
		if (age == arr[i])
			break;
	}
	if (age != arr[i])
	{
		cout<<"!! Age not found !!"<<endl;
		return;
	}
	arr[i] = arr[n - 1];
	n = n - 1;
	root = (i - 1) / 2; 
	if (arr[i] < arr[root])
	{
		insertAge(arr[i], i);
		return;
	}
	left = (2*i) + 1;  
	right = (2*i) + 2; 
	while (right < n)
	{
		if (arr[i] <= arr[left] && arr[i] <= arr[right])
			return;
		if (arr[right] >= arr[left])
		{
			swap(arr[i], arr[left]);
			i = left;
		}
		else
		{
			swap(arr[i], arr[right]);
			i = right;
		}
		left = (2*i) + 1;
		right = (2*i) + 2;
	}										 
	if (left == n - 1 && arr[i] < arr[left]) 
	{
		swap(arr[i], arr[left]);
	}
} 

void display()
{
	int i;
	if (n == 0)
	{
		cout<<"!! Heap is empty !!"<<endl;
		return;
	}
	for (i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int age;
	n = 0;
	while (true)
	{
		cout << "1 --> Insert Age"<< endl;
        cout << "2 --> Find Minimum Age"<< endl;
        cout << "3 --> Delete Minimum Age"<< endl;
        cout << "4 --> Exit"<< endl;
        cout << "Enter your choice: "<<endl;
		int x;
        cin >> x;
		switch (x)
		{
		case 1:
			cout<<"Enter the age to be inserted: "<<endl;
			cin>>age;
			insertAge(age, n);
			n = n + 1;
			break;
		case 2:
			if (n == 0)
				cout<<"!! Heap is Empty !!"<<endl;
			else
				cout<<"Minimum Age: "<< arr[0]<<endl;
			break;
		case 3:
			if (n == 0){
				cout<<"!! Heap is Empty !!"<<endl;
			}
			else{
				deleteAge(arr[0]);
				cout<<"Currently available data: "<<endl;
				display();
			}
			break;
		case 4:
			return 0;
		default:
			cout<<"!! Enter valid choice !!"<<endl;
		} 
	}	  
	return 0;
} 
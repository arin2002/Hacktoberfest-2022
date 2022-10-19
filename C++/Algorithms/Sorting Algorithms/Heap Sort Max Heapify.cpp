/*
Sub tree rooted at i is a max heap. Simple bound: 
– O(n) calls to MAX-HEAPIFY, 
– Each of which takes O(lg n), – Complexity: O(n lg n). –
 Thus, the running time of BUILD-MAX-HEAP is O(n).
*/
//Total Complexsity is nlog(n)
#include<iostream>
using namespace std;
void Max_Heapify(int arr[],int size,int i)  //This will run n times;
{
	int largest=i;
	int left=2*i;
	int right = (2*i)+1;
	if(left<=size && arr[left]>arr[largest])
	{
		largest=left;		
	}
	if(right<=size && arr[right]>arr[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		int temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;
		Max_Heapify(arr,size,largest);
	}
}
void Heap_Sort(int arr[],int Size)
{
	for(int i=Size/2;i>=1;i--)
	{
		Max_Heapify(arr,Size,i);    //Create Max Heap  or Build Max Heap Assending Order
	}
	//To Delete and Sort
	for(int i=Size;i>=1;i--)
	{
		int temp=arr[i];
		arr[i]=arr[1];
		arr[1]=temp;
		Max_Heapify(arr,i-1,1);
	}
}
int main()
{
	cout<<"Heap Sort"<<endl<<endl;
	cout<<"Enter 5 Elements "<<endl<<endl;
	int arr[6];
	for(int i=1;i<6;i++)
	{
		cout<<"Enter Element "<<i<<" = ";
		cin>>arr[i];
	}
	Heap_Sort(arr,6-1);
	cout<<endl<<endl<<"After Heap Sort"<<endl<<endl;
		for(int i=1;i<6;i++)
	{
		cout<<"Element "<<i<<" = "<<arr[i]<<endl;
	}
	return 0;
}

#include<stdio.h>

int BS(int arr[],int size,int element)
{
	int start,mid,end;
	
	start=0;
	end=size-1;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		
		if(element==arr[mid])
		{
			return mid;
		}
		if(element>arr[mid])
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,3,5,56,64,73,123,225,555};
	int size=sizeof(arr)/sizeof(int);
	
	int element=123;
	
	int searchindex=BS(arr,size,element);
	
	printf("The required element %d present at index = %d and position=%d",element,searchindex,searchindex+1);
}

#include<stdio.h>
//Arastu
void bubble_sort(int, int*);
void main()
{	int n, list[20], i;
	printf("input the number of elements of the list\n ");
	scanf("%d",&n);
	printf("\n Input the elements of the list\n");
	for(i=0;i<n;i++)
	{scanf("%d",&list[i]);}
	printf("List Input :\n");
	for(i=0;i<n;i++)	
	{	printf("%d\n",list[i]);
	}
	bubble_sort(n,list);
}
void bubble_sort(int n, int arr[])
{	int temp,i,j;
	for(i=0;i<n;i++)
	{	for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{	
			temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	printf("\n Sorted list is as follows:\n");
	for(i=0;i<n;i++)
	{	printf("%d\n",arr[i]);
	}
} 

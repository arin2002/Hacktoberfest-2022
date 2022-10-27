#include<stdio.h>
//Arastu
void insertion_sort(int, int*);
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
	insertion_sort(n,list);
}

void insertion_sort(int n, int arr[])
{	int temp,i,j;
	for(i=0;i<n;i++)
	{	temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&(j>=0))
		{
		arr[j+1]=arr[j];
		j--;
		}
		arr[j+1]=temp;
	}
 	printf("\n The sorted list is as follows:\n");
	for(i=0;i<n;i++)
	{printf("%d\n",arr[i]);
	}
}

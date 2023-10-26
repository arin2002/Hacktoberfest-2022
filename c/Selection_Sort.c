#include<stdio.h>

void selectionsort(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int temp;
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
void printarray(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}

int main()
{
	int a[]={5,8,3,1,6};
	int size = sizeof(a)/sizeof(int);
	
	printf("Array before sorting:\n");
	printarray(a,size);
	selectionsort(a,size);
	printf("\nArray after sorting:\n");
	printarray(a,size);
	
	return 0;
}


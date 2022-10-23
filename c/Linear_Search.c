#include<stdio.h>

int main()
{
	int a[]={2,4,632,53,7,55,62,12,32};
	int found=0;
	int data,i;
	int size=sizeof(a);
	
	printf("Enter the data you want to search in Linear Search:\n");
	scanf("%d",&data);
	
	for(i=0;i<size;i++)
	{
		if(a[i]==data)
		{
			printf("The required element is found at position %d",i++);
			found++;
			break;
		}
	}
	if(found==0)
	{
		printf("Element not present in given array");
	}
	return 0;
}

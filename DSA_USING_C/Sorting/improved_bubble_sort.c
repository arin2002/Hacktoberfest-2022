#include<stdio.h>

void Bubble_sort(int *A,int n)
{
	int i,j,k,temp;
	int flag=1;
	for(i=0;i<n-1 && flag;i++)  // for iteration n-1
	{
		flag=0;
		for(j=0;j<n-i-1;j++) // for comparing elements
		{
			if(A[j]>A[j+1])
			{
				flag=1;
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;			
			}
			for(k=0;k<5;k++)
			{
				printf("%d ",A[k]);
			}
			printf("\n");
		}
		
		
	}
}
int main()
{
	int A[5],i;
	printf("Enter Array Elemnts: ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&A[i]);
	}
	printf("Array Elemnts: \n ");
	for(i=0;i<5;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	Bubble_sort(A,5);
	printf("Sorted Array Elemnts: \n ");
	for(i=0;i<5;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}

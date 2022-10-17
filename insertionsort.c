#include<stdio.h>
#include<stdlib.h>
#define MAX 100
 int main()
 {
 	int a[MAX],n,i,j,temp;
 	printf("Enter number of elements ");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("Enter number at a[ %d ] : ",i);
 		scanf("%d",&a[i]);
	 }
	 printf("\n Before Sorting : ");
	 for(i=0;i<n;i++)
	  printf(" %d",a[i]);
	  
	  
	for(i=1;i<n;i++)//no. of pass
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\n After Sorting : ");
	 for(i=0;i<n;i++)
	  printf(" %d",a[i]);
	 
 }// end of main

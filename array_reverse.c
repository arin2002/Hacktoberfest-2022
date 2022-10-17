#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*a,temp;
	printf("REVERSAL OF ARRAY \n");
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=(n-1)/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

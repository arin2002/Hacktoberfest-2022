#include<stdio.h>
void main()
{
	int n,i;
	printf("Multiplication table of:");
	scanf("%d",&n);
	
	for(i=10;i;i--)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
	
}

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	
	printf("Enter number to find factorial for:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact*=i;
		
	}
	printf("\nFactorial is %d is %d\n",n,fact);
	return 0;
}

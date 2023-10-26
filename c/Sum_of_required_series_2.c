//Series => 1/1!+1/2!+1/3! + ........+1/n!


#include<stdio.h>
int main()
{
	int i,j,n,fact=1;
	float sum=0;
	
	printf("sum of series 1/1!+1/2!+1/3! + ........+1/n!:\n");
	
	printf("\nEnter number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=i;j>0;j--)
		{
			fact*=j;
		}
		sum+=(1.0/fact);
	}
	printf("\nSum of %d terms =%f",n,sum);
	
	return 0;
}

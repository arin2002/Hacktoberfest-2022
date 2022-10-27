#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Value of n is:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
		printf("The value of sum (1 to 10) is %d \n",sum);
		
	}
	
	return 0;
}

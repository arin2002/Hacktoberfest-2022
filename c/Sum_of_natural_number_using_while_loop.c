#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Value of n is :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
		printf("sum is %d\n",sum);	
	}
	return 0;
}

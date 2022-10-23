#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Value of n is:");
	scanf("%d",&n);
	
	do{
		sum+=i;
		i++;
		
	}
	while(i<=n);
	{
		printf("Sum is %d\n",sum);	
	}
	return 0;

}

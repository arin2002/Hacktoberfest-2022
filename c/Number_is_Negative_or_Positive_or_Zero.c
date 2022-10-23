#include<stdio.h>
int main()
{
	int num;
	printf("Enter value of num :");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Num is +ve\n");
	}
	else if(num<0)
	{
		printf("Num is -ve\n");
	}
	else if(num==0)
	{
		printf("Num is zero\n");
	}
	
	return 0;
}

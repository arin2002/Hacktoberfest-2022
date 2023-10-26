#include<stdio.h>
int main()
{
	int n,last_digit;
	printf("Enter an integer:");
	scanf("%d",&n);
	
	last_digit=n%10;
	
	if(last_digit%2==0)
	{
		printf("\nLast Digit of integer %d is Even",n);
	}
	else
	{
		printf("\nLast Digit of number %d is Odd",n);
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	int n,last_digit;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	
	last_digit=n%10;
	
	if(last_digit%2==0)
	{
		printf("Last Digit of integer %d is Even\n",n);
	}
	else
	{
		printf("Last Digit of number %d is Odd\n",n);
	}
	
	return 0;
}

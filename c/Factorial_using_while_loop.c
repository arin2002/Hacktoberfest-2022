#include<stdio.h>
int main()
{
	int i=1;
	float n,fact=1;
	
	printf("Enter number to be find for factorial:");
	scanf("%f",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %f is :%f\n",n,fact);
	
	return 0;
}

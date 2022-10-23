//A prime number is a natural number 
//greater than 1 that is 
//divisible only by 1 and itself (i.e is having two factors)

// Note: 1 is neither prime nor compsite number

//For example: 2, 30, 5, 7, 11, 13, 17 etc are some prime numbers

#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=2;i<=n-1;i++)			// Prime is start with 2 and we use n-1 so that we cannot original number in the iteration
	{
		if(n%i==0)
		
			break;
	}
	if(n==1)
	{
		printf("\n 1 is neither prime nor composite\n");
	}
	else if(i==n)
	{
		printf("\n%d is Prime number\n",n);
	}
	else
	{
		printf("\n %d is not a prime number\n",n);
	}
	
}

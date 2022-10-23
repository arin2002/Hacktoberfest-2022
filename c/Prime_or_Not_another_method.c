//A prime number is a natural number 
//greater than 1 that is 
//divisible only by 1 and itself (i.e is having two factors) 

// Note: 1 is neither prime nor compsite number

//For example: 2, 30, 5, 7, 11, 13, 17 etc are some prime numbers

#include<stdio.h>
int main()
{
	int n,i,count=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)               // Here we are calculating factors of given number
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n%d is Prime Number\n",n);              // Prime number having only 2 factors
	}
	else if(count==1)
	{
		printf("\n 1 is neither prime nor composite number\n");
	}
	else
	{
		printf("\n%d is a not a Prime Number\n",n);
	}
	return 0;
	
}

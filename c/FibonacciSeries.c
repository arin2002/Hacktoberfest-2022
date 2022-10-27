//The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms.
//The first two terms of the Fibonacci sequence are 0 followed by 1.
//
//The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
//Next term is 13+21=34


#include<stdio.h>
int main()
{
	int n,i,first=0,second=1,next_term;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	
	printf("Fibonacci Series:\n");
	
	for(i=1;i<=n;++i)
	{
		printf("%d ,",first);
		
		next_term=first+second;
		first=second;
		second=next_term;
		
	}
	
}

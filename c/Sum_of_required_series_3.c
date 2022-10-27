// Series => 1^2+2^2+3^2+4^2..........+n^n


#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Sum of 1^2+2^2+3^2+4^2..........+n^n-->\n");
	
	printf("\nEnter number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum= sum + (i*i);
	}
	printf("\nSum of %d terms = %d\n",n,sum);
	return 0;
}

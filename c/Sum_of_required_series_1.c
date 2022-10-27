// Series => 1+1/2+1/3+1/4+....+1/n


#include<stdio.h>
int main()
{
	int n,i;
	float sum=0;
	
	printf("Sum of 1+1/2+1/3+1/4+........+1/n-->\n");
	
	printf("\nEnter number of terms: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=(1.0/i);
	}
	
	printf("\nSum of %d terms = %f",n,sum);
	return 0;
}

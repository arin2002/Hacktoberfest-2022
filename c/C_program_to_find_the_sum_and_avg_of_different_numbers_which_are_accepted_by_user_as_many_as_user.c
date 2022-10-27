#include<stdio.h>
int main()
{
	int i,n,val;
	float avg,sum=0;
	
	printf("How Many Number You Want to Enter:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter number %d:\n",i);
		scanf("%d",&val);
		
		sum=sum+val;
		avg=sum/n;
	}
	printf("\nSum is = %f\n",sum);
	printf("Average is = %f\n",avg);
}

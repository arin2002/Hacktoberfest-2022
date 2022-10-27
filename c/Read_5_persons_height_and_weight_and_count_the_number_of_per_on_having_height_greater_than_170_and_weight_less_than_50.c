#include<stdio.h>
int main()
{
	int i,ht,wt,count=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter height of %d person:",i);
		scanf("%d",&ht);
		
		printf("Enter weight of %d person:",i);
		scanf("%d",&wt);
		
		printf("\n");
		
		if(ht>170)
		{
			if(wt<50)
			{
				count++;
			}
		}
	}
	printf("Total persons having height > 170 and weight < 50 is : %d\n",count);
	return 0;
}

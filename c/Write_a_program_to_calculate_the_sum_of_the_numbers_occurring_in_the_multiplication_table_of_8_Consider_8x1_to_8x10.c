//8*1=8
//8*2=16
//...........8+16........=Required Number

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		sum+=n*i;
		
	}
	printf("Sum of multiplication table is %d\n",sum);
	
	return 0;
}

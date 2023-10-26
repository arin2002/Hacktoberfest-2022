#include<stdio.h>
int main()
{
	int a,b,temp;
	
	printf("Value of a:");
	scanf("%d",&a);
	
	printf("Value of b:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping value of a is %d\n",a);
	printf("After swapping value of b is %d\n",b);
	
	return 0;
	

}

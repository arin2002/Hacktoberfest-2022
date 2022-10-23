#include<stdio.h>
int main()
{
	int marks,phy,math,chem;
	float total;
	
	printf("Enter physics marks:");
	scanf("%d",&phy);
	
	printf("Enter maths marks:");
	scanf("%d",&math);
	
	printf("Enter chemistry marks:");
	scanf("%d",&chem);
	
	total=(phy+math+chem)/3;
	
	
	if((total<40) || math<33 || chem<33 || phy<33)
	{
		printf("Your percentage is %f and you are failed",total);
	}
	else
	{
		printf("You are passed with percentage of %f",total);
	}
	
	
	
	
}

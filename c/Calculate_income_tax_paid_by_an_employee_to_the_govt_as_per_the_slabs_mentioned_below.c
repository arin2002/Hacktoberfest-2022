#include<stdio.h>
int main()
{
	float tax=0,income;
	
	printf("Enter ur income:");
	scanf("%f",&income);
	
	if(income>=250000 && income<=500000)
	{
		tax=tax + 0.05*(income-250000);
		printf("Your income tax is %f",tax);
	}
	if(income>500000 && income<=100000)
	{
		tax=tax + 0.20*(income-500000);
		printf("Your income tax is %f",tax);
	}
	if(income>1000000)
	{
		tax=tax + 0.30*(income-1000000);
		printf("Your income tax is %f",tax);
	}
	if(income<250000)
	{
		printf("You are not in income tax slab\n");
	}
	return 0;
	
}

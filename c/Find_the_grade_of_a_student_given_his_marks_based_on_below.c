#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>90 && marks<=100)
	{
		printf("You got A grade\n");
	}
	else if(marks>80 && marks<=90)
	{
		printf("You got B grade\n");
	}
	else if(marks>70 && marks<=80)
	{
		printf("You got C grade\n");
	}
	else if(marks>60 && marks<=70)
	{
		printf("You got D grade\n");
	}
	else if(marks<70)
	{
		printf("You are failed\n");
	}
	else
	{
		printf("You are absent in examination or wrong input\n");
	}
	return 0;
}

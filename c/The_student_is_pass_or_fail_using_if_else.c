#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks(0-100):");
	scanf("%d",&marks);
	
	if(marks>33)
	{
		printf("You are passed with %d marks\n",marks);
	}
	else
	{
		printf("You are failed\n");
	}
	return 0;
}

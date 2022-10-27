#include<stdio.h>
main()
{
	int n1,n2,n3,n4;
	
	printf("Enter Four numbers:");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	
	if(n1>n2 && n1>n3 && n1>n4)
	{
		printf("%d is greatest\n",n1);
	}
	if(n2>n1 && n2>n3 && n2>n4)
	{
		printf("%d is greatest\n",n2);
	}
	if(n3>n1 && n3>n2 && n3>n4)
	{
		printf("%d is greatest\n",n3);
	}
	if(n4>n1 && n4>n3 && n4>n2)
	{
		printf("%d is greatest\n",n4);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int d,u,t,a;
	printf("Enter value of initial velocity:");
	scanf("%d",&u);
	
	printf("Enter value of acceleration:");
	scanf("%d",&a);
	
	printf("Enter value of time:");
	scanf("%d",&t);
	
	d=u*t + a*t*t;
	
	printf("Required equation u*t + a*t*t = %d\n",d);
	
	return 0;
	
}

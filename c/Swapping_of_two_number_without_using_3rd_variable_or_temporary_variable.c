#include<stdio.h>
int main()
{
	float a,b;
	printf("Value of a is :");
	scanf("%f",&a);
	
	printf("Value of b is :");
	scanf("%f",&b);
	
	a=a-b;				// a = (initial a - initial b )
	b=b+a;				// b = (initial a - initial b) + initial b = intial a 
	a=b-a;				// a = intial a{it is actually value of b which is updated} - (intial a - initial b) = intial b 
	
	printf("After swapping value of a is %f\n",a);
	printf("After swapping value of b is %f\n",b);
	
	return 0;
}
	
	
	
	


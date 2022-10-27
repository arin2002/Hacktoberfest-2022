#include<stdio.h>

int main()
{
	int r,h;
	float pi=3.14;
	printf("Radius of Circle is :");
	scanf("%d",&r);
	
	printf("Height of Cylinder is :");
	scanf("%d",&h);
	
	float a=pi*r*r;
	int v=pi*r*r*h;
	
	printf("Area of circle is %f:\n",a);
	
	printf("Volume of cylinder is %d\n",v);
	return 0;
	
}

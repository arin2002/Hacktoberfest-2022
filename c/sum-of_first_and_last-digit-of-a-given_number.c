#include<stdio.h>
int main()
{
	int fn,ln,number,sum;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	ln=number%10;				// Last Digit 
	
	while(number>=10)
	{
		number=number/10;
	}
	fn=number;
	
	sum=ln+fn;
	printf("Sum of First and last number is %d\n :",sum);
}

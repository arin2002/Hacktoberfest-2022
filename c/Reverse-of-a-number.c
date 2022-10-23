#include<stdio.h>
void main()
{
	int n,r,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	
	temp=n;								// Stores the number in the temporary variable 
	
	while(n>0)
	{
		r=n%10;							// Last Digit 
		sum=(sum*10)+ (r);				
		n=n/10;							// Quotient or Remaining number before last digit 
	}
	printf("\nOriginal number is %d\n",temp);
	printf("Reverse number is %d\n",sum);
}

#include <stdio.h>
 
int main()
{
  	int Number,LastDigit,FirstDigit;
 
  	printf("\n Please Enter any Number that you wish : ");
  	scanf("%d", &Number);
  	
  	LastDigit = Number % 10;                  // Modulus Operator gives remainder=Last Digit 
  	
  	while(Number>=10)                         //Here we use num>=10 so that it can give quotient 
  	{                                         // when quotient is again >=10 again while loop runs         
  		Number=Number/10;
	}
	FirstDigit=Number;
  	printf("\nThe First Digit of Given Number is  %d",FirstDigit);
  	printf("\nThe Last Digit of Given Number is  %d\n",LastDigit);
 
  	return 0;
}

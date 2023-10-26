// A leap year is exactly divisible by 4 except for century years (years ending with 00).
// The century year is a leap year only if it is perfectly divisible by 400.

/*If year is exactly divisible by 4 and not divisible by 100, then it is leap year.
  Or if year is exactly divisible by 400 then it is leap year*/

//For example,
//1999 is not a leap year
//2000 is a leap year
//2004 is a leap year


#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year :");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is leap year\n",year);
	}
	else
	{
		printf("Its a Common Year\n");
	}
	return 0;
}

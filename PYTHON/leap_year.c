#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);

    if(year%400==0 || year%100!=0 && year%4==0)
      //every century year which is not divisible by 400 is not a leap year
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
}

#include<stdio.h>

void leap_yr(int);

int main()
{
    int yr;

    printf("Enter the year:");
    scanf("%d",&yr);

    leap_yr(yr);

    return 0;
}

void leap_yr(int yr)
{
    if(yr%4==0 && yr%100!=0 || yr%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

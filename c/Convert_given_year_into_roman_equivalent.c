// 1 - I
// 5 - V
// 10 - X
// 50 - L
// 100 - C
// 500 - D
// 1000 - M

// Example:- 1988 => mdcccclxxxviii
//           1525 => mdxxv

#include<stdio.h>

int romanise(int);

int main()
{
    int yr,romanyr;

    printf("Enter the year:");
    scanf("%d",&yr);

    romanyr=romanise(yr);

}
int romanise(int year)
{
    while (year)
    {
        if(year>=1000)
        {
            printf("m");
            year=year-1000;
        }
        else if(year>=500)
        {
            printf("d");
            year=year-500;
        }
        else if(year>=100)
        {
            printf("c");
            year=year-100;
        }
        else if(year>=50)
        {
            printf("l");
            year=year-50;
        }
        else if(year>=10)
        {
            printf("x");
            year=year-10;
        }
        else if(year>=5)
        {
            printf("v");
            year=year-5;
        }
        else if(year>=1)
        {
            printf("i");
            year=year-1;
        }
    }
    return(year);
}

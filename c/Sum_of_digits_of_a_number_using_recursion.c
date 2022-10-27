#include<stdio.h>

int Rsum(int);              // Recurcive Function
int Isum(int);              // Iterative Function

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("\nSum of digits of number without using recursion= %d",Isum(num));

    printf("\nSum of digits of a number using recursion= %d",Rsum(num));

    return 0;

}  

int Rsum(int num)
{
    int r,sum=0;

    if(num!=0)
    {
        r=num%10;
        sum=r+Rsum(num/10);
    }
    return sum;
}

int Isum(int num)
{
    int r,sum=0;

    while (num>0)
    {
        r=num%10;           // Last Digit
        sum=sum+r;
        num=num/10;         // Remove Last digit 
    }
    return sum;
}
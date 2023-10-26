#include<stdio.h>

int sum(int);

int main()
{
    int num;

    printf("Enter number of terms you want to add:");
    scanf("%d",&num);

    printf("Sum of first %d numbers = %d",num,sum(num));
}    

int sum(int n)
{
    if(n==1)
        return(1);

    if(n!=0)
    {
        return(n +sum(n-1));
    }
}
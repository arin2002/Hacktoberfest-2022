#include<stdio.h>
int factorial(int);

int main()
{
    int n,f;

    printf("Enter a Number:");
    scanf("%d",&n);

    f=factorial(n);

    printf("Factorial of %d is %d",n,f);
}
int factorial(int num)
{
    int fact=1,i;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
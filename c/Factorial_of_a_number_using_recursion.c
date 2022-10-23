#include<stdio.h>

int factorial(int);

int main()
{
    int num,f;

    printf("Enter a Number:");
    scanf("%d",&num);

    f=factorial(num);

    printf("Factorial of %d = %d\n",num,f);
    
    return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    else
        return (n*factorial(n-1));
    
       
}
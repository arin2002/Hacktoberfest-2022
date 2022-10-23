// Fibonacci Series = 0,1,1,2,3,5,8,13,21.........

// Hint:-  fib(n) = fib(n-1) + fib(n-2)
// fib(1)=0
// fib(2)=1

// fib(4)=fib(3)+fib(2)

#include<stdio.h>

int Fibo(int);

int main()
{
    int terms,i;

    printf("Enter Number of terms:");
    scanf("%d",&terms);

    printf("Fibonacci Series is\n");

    for(i=1;i<=terms;i++)
    {
        printf(" %d ",Fibo(i));
    }
}

int Fibo(int n)
{
    if(n==1){
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return (Fibo(n-1)+Fibo(n-2));
    }
}
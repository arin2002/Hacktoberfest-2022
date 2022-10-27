#include<stdio.h>

int sumN(int);

int main()
{
    int num,sum;

    printf("Enter range of natural numbers:");
    scanf("%d",&num);

    sum=sumN(num);

    printf("Sum of %d natural numbers = %d",num,sum);

    return 0;
}

int sumN(int n)
{
    int i,s=0;

    for(i=1;i<=n;i++)
    {
        s=s+i;                      // We can also use this formula /* return ((n*(n+1))/2); */
    }
    return (s);
}
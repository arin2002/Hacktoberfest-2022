#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)            // This program will not give any output for 1 and 2 
    {
        if(n%i==0)
        {
            printf("%d is not a prime number\n",n);
            break;
        }
        if(n==1)
        {
            printf("%d is Prime Number\n");
        }
    }
}
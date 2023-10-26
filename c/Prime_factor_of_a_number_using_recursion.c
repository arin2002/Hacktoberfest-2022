#include<stdio.h>


void PrimeF(int,int);

int main()
{
    int num;

    printf("Enter a positive number:");
    scanf("%d",&num);

    PrimeF(num,1);                         

}

void PrimeF(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
        }

        PrimeF(n,i+1);
    }


}
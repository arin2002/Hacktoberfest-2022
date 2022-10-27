#include<stdio.h>

void primefactors(int);

int main()
{
    int num;

    printf("Enter a positive number:");             // We use +ve number because negative number of prime factor is not defined 
    scanf("%d",&num);

    primefactors(num);

    return 0;
}

void primefactors(int num)
{
    int i,count;

    printf("Prime Facotors of %d are:\n",num);

    for(count=2;num>1;count++)          // Here we use count=2 because 1 is factor of every number
    {                                 
        while (num%count==0)
        {
            printf("%d\n",count);
            num=num/count;
        }
    }
}
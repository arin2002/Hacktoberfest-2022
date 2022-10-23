#include<stdio.h>

int isprime(int);

int main()
{
    int num,result;

    printf("Enter a number:");
    scanf("%d",&num);

    result=isprime(num);

    printf("result = %d\n",result);

    if(result==1)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is Not Prime");
    }
    
}

int isprime(int num)
{
    int i,flag=0;

    for(i=1;i<=num;i++) 
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
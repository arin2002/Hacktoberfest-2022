#include<stdio.h>

int Prime(int,int);

int main()
{
    int num,check;
    
    printf("Enter a Number:");
    scanf("%d",&num);

    check=Prime(num,num/2);

    if(check)
    {
        printf("%d is a Prime Number",num);
    }
    else
    {
        printf("%d is not a Prime Number",num);
    }
    
}

int Prime(int n,int i)
{
    if(i==1)
    {
        return 1;
        
    }
    
    else
    {
        if(n%i==0)
        {
            return 0;
        }
        else
            return Prime(n,i-1);
    }
}
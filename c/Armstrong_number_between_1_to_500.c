#include<stdio.h>
int main()
{
    int n,i,sum,temp;

    printf("All Armstrong Number between 1 to 500:\n");

    for (i=1;i<=500;i++)        // Loop runs between 1 to 500
    {
        sum=0;
        temp=i;            // As we need to retain the original number

        while(temp>0)
        {
            n=temp%10;
            sum=sum+(n*n*n);
            temp=temp/10;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }


    }
    
}
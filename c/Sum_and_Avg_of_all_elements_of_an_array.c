#include<stdio.h>

int main()
{
    int i,a[10],sum=0;
    float avg;

    for(i=0;i<=9;i++)
    {
        printf("Enter array value of a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        sum=sum + a[i];
    }
    
    printf("\nSum of 10 array elements is %d",sum);
    
    printf("\nAverage of 10 elements is %f",(float)sum/10);
}
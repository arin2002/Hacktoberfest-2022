#include<stdio.h>
int main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        printf("\nEnter array elements at a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nThe array elements at index a[%d]:%d",i,a[i]);
    }

}
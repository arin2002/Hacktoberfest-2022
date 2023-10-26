#include<stdio.h>

int main()
{
    int a[5],b[5],c[5],sum[5],i;

    printf("Enter first array elements\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the value of a[%d]:\n",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter second array elements\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the value of b[%d]:\n",i);
        scanf("%d",&b[i]);
    }

    printf("Sum of arrays a and b is:\n");

    for(i=0;i<5;i++)
    {
        sum[i]=a[i] + b[i];

        printf("Required arrays elements of c[%d]=%d\n",i,sum[i]);
    }

    return 0;
}
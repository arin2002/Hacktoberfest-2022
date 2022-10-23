#include <stdio.h>
int main()
{
    int a[5],b[5],i,j;

    printf("Enter Elements of 1st array:");

    for(i=0;i<5;i++)                //1st array
    {
        scanf("%d",&a[i]);
    }

    printf("\nReversed");

    for(i=0,j=4;i<5;i++,j--)                
    {
        b[j]=a[i];
    }

    for(j=0;j<5;j++)
    {
        printf("Array element at b[j]:%d\n",b[j]);
    }

}

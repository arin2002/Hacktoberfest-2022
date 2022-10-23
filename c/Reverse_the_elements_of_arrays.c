#include<stdio.h>

int main()
{
    int i,a[100],n;

    printf("Enter size of array:");
    scanf("%d",&n);

    printf("\nEnter elements of arrays:\n");

    for(i=0;i<n;i++)
    {
        printf("Enter array elements at a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nReverse array will be\n");

    for(i=n-1;i>=0;i--)
    {
        printf("Reverse array elements will be = %d\n",a[i]);
    }

    
}
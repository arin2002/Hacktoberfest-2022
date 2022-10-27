#include<stdio.h>

int main()
{
    int a[5],max,i;

    printf("Enter the value of array elements:\n");

    for(i=0;i<5;i++)
    {
        printf("Enter the value at a[%d]:\n",i);
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nMax value from array = %d",max);

    return 0;
}

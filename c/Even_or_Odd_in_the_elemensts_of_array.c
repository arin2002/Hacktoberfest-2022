#include<stdio.h>

int main()
{
    int a[10],i;

    printf("Enter the elements of array:\n");

    for(i=0;i<10;i++)
    {
        printf("Value of element in a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nEven number in an array are-\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("Even numbers are = %d\n",a[i]);
        }   
    }

    printf("\nOdd number in an array are-\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            printf("Odd numbers are = %d\n",a[i]);
        }   
    }
    

    
}
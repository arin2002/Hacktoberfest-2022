#include<stdio.h>

int main()
{
    int i,a[5],temp;

    printf("\nEnter array elements:\n");

    for(i=0;i<5;i++)
    {
        printf("Array elements at a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nInterchanging array elements:\n");
    
    for(i=0;i<5;i=i+2)            // Here we want only one side interchange not all sides that why use i=i+2
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<5;i++)
    {           
       printf("Now new value at a[%d]:%d\n",i,a[i]);
    }
    return 0;
     
}
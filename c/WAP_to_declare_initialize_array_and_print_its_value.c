#include<stdio.h>

int main()
{
    int a[3];
    int b[3]={3,5,3};

    printf("Enter Array elements of first array");
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    printf("The array elements are: %d %d %d\n",a[0],a[1],a[2]);


    printf("The array elements of second array are: %d %d %d",b[0],b[1],b[2]);


}
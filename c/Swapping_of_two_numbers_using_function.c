#include<stdio.h>

void swap(int x,int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

    printf("Number after swapping = %d %d",x,y);
}

int main()
{
    int a,b;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    printf("Number before swapping = %d %d\n",a,b);

    swap(a,b);
}
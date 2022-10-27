#include<stdio.h>

float Avg(int a,int b,int c)
{
    float avg;

    avg=(float)(a+b+c)/3;

    return avg;
}

int main()
{
    int x,y,z;
    float answer;

    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);

    printf("Average of three numbers = %f",Avg(x,y,z));

    return 0;

}
#include<stdio.h>
float power(float,int);

int main()
{
    int y;
    float x,pow;

    printf("Enter two Number:");
    scanf("%f %d",&x,&y);

    pow=power(x,y);

    printf("%f to the power %d = %f",x,y,pow);
}

float power(float a,int b)
{
    int i;
    float p=1;

    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    return(p);
}
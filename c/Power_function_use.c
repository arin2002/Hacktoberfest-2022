#include<stdio.h>
#include<math.h>
int main()
{
    float a,p,r,q,n,i;

    for(i=1;i<=5;i++)
    {
        printf("Enter principal amount:",);
        scanf("%f",&p);

        printf("Enter Rate of interest:");
        scanf("%f",&r);

        printf("Enter number of years:");
        scanf("%f",&n);

        printf("Enter Interest Compound:");
        scanf("%f",&q);

        a=p * pow((1+r/q),(n*q));

        printf("Amount=%f\n",a);
    }
}
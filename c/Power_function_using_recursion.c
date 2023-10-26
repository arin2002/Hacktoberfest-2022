#include<stdio.h>

int Pow_rec(int,int);

int main()
{
    int b,p;

    printf("Enter base value:");
    scanf("%d",&b);

    printf("Enter power value:");
    scanf("%d",&p);

    printf("Power of %d to the power %d = %d",b,p,Pow_rec(b,p));

    return 0;
}

int Pow_rec(int x,int y)
{
    if(y==1)
        return x;

    else
    {
        return (x*Pow_rec(x,y-1));
    }
    

}
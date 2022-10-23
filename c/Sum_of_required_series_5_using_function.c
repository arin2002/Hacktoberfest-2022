// Series => 1+x+x^2+x^3+x^4+..........x^n

#include<stdio.h>
#include<math.h>

float Series(float,int);

int main()
{
    int n;
    float x,result;

    printf("Enter value of X:");
    scanf("%f",&x);

    printf("Enter value of N:");
    scanf("%d",&n);

    result=Series(x,n);

    printf("Result=%f",result);
}

float Series(float a,int b)
{
    float sum=0;

    for(int i=1;i<=b;i++)
    {
        sum=sum+pow(a,i);
    }
    return sum;

}
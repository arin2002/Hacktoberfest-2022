// Series => 1-x + x^2/2! - x^3/3! + x^4/4! ...... -x^9/9!


#include<stdio.h>
     
int main()
{
    int n,i,j,fact=1;
    float sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=i;j>0;j--)
        {
            fact=fact * j;
        }
        sum=sum+(1.0/fact);
    }
    printf("\n Sum of Series = %f",sum);
    return 0;
}



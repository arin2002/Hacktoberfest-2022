#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=3;i++)           // First Digit 
    {
        for(j=1;j<=3;j++)       // Second Digit
        {
            for(k=1;k<=3;k++)   // Third Digit 
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
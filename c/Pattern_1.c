// *****
// *****
// *****
// *****
// *****

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)           // For rows        
    {
        for(j=1;j<=5;j++)       // For columns
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// *****
// ****
// ***
// **
// *


#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)                   //  We can also use this i=r;i>=1;i--
    {
        for(j=rows;j>=i;j--)               //  We can also use this j=1;j<=i;j++
        {
            printf("*");
        }
        printf("\n");
    }
}
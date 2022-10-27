// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

// We can simply combine the pattern number 2 and 4 and we get the required pattern.



#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Enter Number of Rows:");
    scanf("%d",&rows);

    // For upper part pattern
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    // For lower part pattern
    for(i=1;i<=rows;i++)                  
    {
        for(j=rows-1;j>=i;j--)              
        {
            printf("*");
        }
        printf("\n");
    }
}
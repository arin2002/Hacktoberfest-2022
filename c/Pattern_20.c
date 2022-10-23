// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********

// Here we just combine the pattern 8 and 21 with small change


#include<stdio.h>
int main()
{
    int i,j;

    // For upper part
    for(i=1;i<=4;i++)               //  Here we put 4 rows only so that in pattern we get only one line having maximum number of stars. 
    {
        for (j=1;j<=9;j++)
        {
            if(j<=6-i || j>=4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // For lower part
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=i || j>=10-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
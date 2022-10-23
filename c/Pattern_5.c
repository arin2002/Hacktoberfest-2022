// *****
//  ****
//   ***
//    **
//     *


#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Enter Number of Rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" "); 
        }
        printf("\n");
    }
    return 0;
}
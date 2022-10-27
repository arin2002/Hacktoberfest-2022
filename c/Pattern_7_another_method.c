//         *
//       *   * 
//     *   *   *
//    *  *   *   *
//  *  *   *   *   *


#include<stdio.h>
int main()
{
    int i,j,space,r;

    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(space=1;space<=(r-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
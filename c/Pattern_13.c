// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    int i,j,space,rows;

    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=rows;i>=1;i--)                // We can also use i=1;i<=rows;i++  
    {
        for(space=1;space<=rows-i;space++)             // Here we have to change the condition to space<=i-1
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)          // We can also use j=1;j<=11-2*i;j++
        {
            printf("*");
        }
        printf("\n");
    }
}
//     *****
//    *****
//   *****
//  ***** 


#include<stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=4;i++)
    {
        for(space=1;space<=4-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
//     *****
//    *****
//   *****
//  ***** 

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j>=5-i && j<=9-i)
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

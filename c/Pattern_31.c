//     A
//    CB
//   FED
//  JIHG
// ONMLK


#include<stdio.h>
int main()
{
    int i,j;
    char k=64;

    for(i=1;i<=5;i++)
    {
        k=k + 2*(i-1) + 1;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("%c",k--);
            }
            else
            {
                printf(" ");
            }
        }    
        printf("\n");
    }
}
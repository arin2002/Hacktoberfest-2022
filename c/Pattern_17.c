// 6543210
// 543210
// 43210
// 3210
// 210
// 10
// 0


#include<stdio.h>
int main()
{
    int i,j,k,rows;

    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
            {
                printf("%d",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }                                                                              
}
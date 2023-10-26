// 0
// 0 1
// 0 2 4
// 0 3 6 9
// 0 4 8 12 16


#include<stdio.h>
int main()
{
    int i,j,k,rows;

    printf("Enter Number of Rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=0;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
            printf("%d ",k);
            k=k+i-1;
            }
        }
        printf("\n");
    }
}
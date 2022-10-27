// *
// ***
// *****


#include<stdio.h>

void Pattern(int,int);

int main()
{
    int rows,column,result;

    printf("Enter Number of rows:");
    scanf("%d",&rows);

    printf("Enter Number of column:");
    scanf("%d",&column);

    Pattern(rows,column);
}

void Pattern(int r,int c)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(j<=2*i-1)
                printf("*");
        }
        printf("\n");
    }
}    
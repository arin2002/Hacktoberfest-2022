#include<stdio.h>

int main()
{
    int a[2][3],b[3][2];

    printf("Enter matrix elements:\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose of a Matrix:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    printf("Print this transpose in another 2D array:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Matrix element at b[%d][%d]=%d\n",i,j,a[j][i]);
        }
    }
    

    return 0;
}
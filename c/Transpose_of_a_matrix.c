#include<stdio.h>

int main()
{
    int a[2][3]={{1,2,3},
                {4,5,6}
                };

    printf("Matrix Elements are:\n");

    for(int i=0;i<2;i++)
    {   
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Tranpose of a Matrix are:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);         // We interchange this bcz we have to interchange rows and columns 
        }
        printf("\n");
    }

    return 0;
}
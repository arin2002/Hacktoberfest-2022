#include <stdio.h>

int main()
{
    int a[3][3], i, j, sr, sc;

    printf("Read matrix elements:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix elements are:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        sr = sc = 0; // We intialize this here bcz we want individual rows and columns sum
        for (int j = 0; j < 3; j++)
        {
            sr = sr + a[i][j];
            sc = sc + a[j][i];
        }
        printf("\nSum of Rows= %d and Sum of columns = %d\n", sr, sc);
    }

    return 0;
}
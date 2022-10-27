#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter the Siz of Coloumns :- ");
    scanf("%d", &n);
    printf("Enter the Size of Rows: -");
    scanf("%d", &m);
    int arr[n][m];
    int k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter the value at %d indexv : ", k++);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" \n| ");
        for (j = 0; j < m; j++)
        {
            printf("  %d  ", arr[i][j]);
        }
        printf(" | \n ");
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }
    if (count < (n * m))
    {
        printf("\nSparse Matrix \n");
        printf("\nThree Tuple form \n");
        int Ttf[10][3];
        Ttf[0][0] = n;
        Ttf[0][1] = m;
        Ttf[0][2] = count;
        int q = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (arr[i][j] != 0)
                {
                    Ttf[q][0] = i;
                    Ttf[q][1] = j;
                    Ttf[q][2] = arr[i][j];
                    q++;
                }
            }
        }
        for (i = 0; i < count + 1; i++)
        {
            printf(" \n| ");
            for (j = 0; j < 3; j++)
            {
                printf("  %d  ", Ttf[i][j]);
            }
            printf(" | \n ");
        }
    }
    else
    {
        printf("\n Not a sparse matrix \n");
    }
}
/* SELECTION SORT*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100], n, i, j, temp, loc;
    // clrscr();
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        loc = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[loc])
            {
                loc = j;
            }
        }
        if (loc != i)
        {
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
    }

    printf("\nThe Sorted Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    //getch();
    return 0;
}
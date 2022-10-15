#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shellsort();
int arr[100];
int n;

void main()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the sequence: ");
    for (int a = 0; a < n; a++)
    {
        scanf("%d", &arr[a]);
    }
    shellsort();
}

void shellsort()
{
    for (int k = n / 2; k > 0; k = k / 2)
    {
        for (int i = k; i < n; i++)
        {
            int tmp = arr[i];
            int j;
            for (j = i; j >= k && arr[j - k] > tmp; j = j - k)
            {
                arr[j] = arr[j - k];
            }
            arr[j] = tmp;
        }
    }
    int k;
    printf("Sorted sequence: \n");
    for (k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}

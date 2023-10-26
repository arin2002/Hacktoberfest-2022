#include<stdio.h>
void selectionSort(int A[],int n);
#define MAX 100
int main()
{
    int A[MAX];
    int n;

    printf("Enter the no of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\n");

    for(int i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
    }

    selectionSort(A,n);

    printf("Elements after sorting are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
void selectionSort(int a[],int n)
{
    int i,j,min,pos;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
        if(pos != i)
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
}

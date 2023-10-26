#include<stdio.h>
void bubbleSort(int A[],int n);
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

    bubbleSort(A,n);

    printf("Elements after sorting are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
void bubbleSort(int A[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}

#include<stdio.h>


void printarray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int Partition(int A[], int low, int high)
{
    int pivot = A[low];                         // Set the pivot as first element
    int i = low + 1;                            
    int j = high;
    int temp;

    while(i<j)
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } 

    //Swap A[low] and A[j] for Sorting 

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QuickSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int partitionindex;                 // Index of pivot after partition
        
        partitionindex=Partition(a,lb,ub);

        QuickSort(a,lb,partitionindex-1);   // Sort left subarray
        QuickSort(a,partitionindex+1,ub);   // Sort right subarray
    }
}

int main()
{
    int a[]={2,1,0,14,25,36,100,-1};
    int size=sizeof(a)/sizeof(int);

    printarray(a,size);
    QuickSort(a,0,size-1);
    printarray(a,size);

    return 0;
}
#include <stdio.h>
//Arastu
void heapify(int arr[], int n, int i)
{
    int temp;
    int largest = i;  	// Initialize largest as root
    int l = 2*i + 1;  	 // left= 2*i + 1
    int r = 2*i + 2; 	 // right = 2*i + 2
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;


        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    int i,temp;
    // Build heap (rearrange array)
    for ( i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

//One by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {
        // Move current root to end
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    int i;
    for ( i=0; i<n; ++i)
        printf("%d\n",arr[i]);
}

// Driver program
int main()
{
    int i,n;
    printf("Enter the no.of elements in the array\n");
    scanf("%d",&n);
    int arr[n];

    printf("\n Input the elements of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Input :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
   n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);

    printf( "Sorted array is \n");
    printArray(arr, n);
}

#include <stdio.h>

//Swapping the elements
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

//Calling the Bubble Sort Function & Print Array Function
int main(void)
{
	int arr[] = { 64, 31, 81, 45, 73, 52, 129 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Size of Array: %i\n", n);
	printf("Unsorted Array: ");
	printArray(arr, n);
	bubbleSort(arr, n);
	printf("Sorted array: ");
	printArray(arr, n);
	return 0;
}

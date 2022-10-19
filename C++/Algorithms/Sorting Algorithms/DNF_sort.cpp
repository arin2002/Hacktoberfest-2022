#include <iostream>
using namespace std;

// Function to swap two numbers in the array
void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// We will maintain three pointers, low and mid on zero and high on last element
// This sort only works when there are only 3 unique elements in the array
void DNF_sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{
    // Here the three numbers are 0,1 and 2
    int arr[] = {0, 1, 1, 2, 1, 2, 0, 2};

    // Calling the function
    DNF_sort(arr, 8);

    // Printing the sorted array
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
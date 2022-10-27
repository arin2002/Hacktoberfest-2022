#include<stdio.h>
#include<stdlib.h>

int search(int arr[],int size,int element){
    int high,mid,low;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (high+low)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[100] = {1,2,3,4,5,6};
    int size = 6;
    int element = 4;
    search(arr,size,element);
    int search_results = search(arr,size,element);
    printf("The element is found at %d ",search_results);
    return 0;
}



// #include <stdio.h>

// int main()
// {
//     int arr[100], i = 0, mid, high, low, x, n, swap, c, d;

//     printf("Enter the size of array\n");
//     scanf("%d", &n);
//     printf("Enter the numbers of the array \n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (c = 0; c < n - 1; c++)
//     {
//         for (d = 0; d < n - c - 1; d++)
//         {
//             if (arr[d] > arr[d + 1]) 
//             {
//                 swap = arr[d];
//                 arr[d] = arr[d + 1];
//                 arr[d + 1] = swap;
//             }
//         }
//     }

//     printf("Enter the number you want to find \n");
//     scanf("%d", &x);

//     low = 0;
//     high = n - 1;
//     mid = (high + low) / 2;

//     while (low <= high)
//     {
//         if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else if (arr[mid] == x)
//         {
//             printf("Element Found In the Array at %d position", mid + 1);
//             break;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//         mid = (low + high) / 2;
//     }
//     if (low > high)
//     {
//         printf("Element not found the array");
//     }

//     return 0;
// }
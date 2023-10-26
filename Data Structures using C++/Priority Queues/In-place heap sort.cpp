/*
In-place heap sort
Given an integer array of size N. Sort this array (in decreasing order) using heap sort.

Note: Space complexity should be O(1).

Input Format:
The first line of input contains an integer, that denotes the value of the size of the array or N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains array elements after sorting. The elements of the array in the output are separated by single space.

Constraints :
1 <= n <= 10^6
Time Limit: 1 sec

Sample Input 1:
6 
2 6 8 5 4 3

Sample Output 1:
8 6 5 4 3 2

*/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void minHeapify(int *arr, int n, int index) {
    int curr = index;
    int leftChildIndex = 2 * index + 1;
    int rightChildIndex = 2 * index + 2;
    
    if(leftChildIndex < n and arr[leftChildIndex] < arr[curr]) {
        curr = leftChildIndex;
    } 
    
    if(rightChildIndex < n and arr[rightChildIndex] < arr[curr]) {
        curr = rightChildIndex;
    }
    
    if(curr != index) {
        swap(&arr[curr], &arr[index]); 
        minHeapify(arr, n, curr);
    }
}
void heapSort(int arr[], int n) {
    // Write your code
    int count = n - 1; 
    
    while(count >= 0){
    	minHeapify(arr, n, count);
        count--;
    }
    
    count = 0;
    while(count < n) {
        swap(&arr[0], &arr[n - count - 1]);
        minHeapify(arr, n - count - 1, 0);
        count++;
    }   
}
// Time Complexity : O(nlogn)
// Auxillary Space : O(1)

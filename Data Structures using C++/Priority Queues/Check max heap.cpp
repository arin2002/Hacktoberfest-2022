/*
Check Max-Heap
Given an array of integers, check whether it represents max-heap or not. Return true if the given array represents max-heap, else return false.

Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains true if it represents max-heap and false if it is not a max-heap.

Constraints:
1 <= N <= 10^5
1 <= Ai <= 10^5

Time Limit: 1 sec

Sample Input 1:
8
42 20 18 6 14 11 9 4

Sample Output 1:
true
*/

bool isMaxHeap(int arr[], int n, int index = 0) {
    // Write your code here
    // base case
    if(index > (n - 2 )/ 2) {
        return true;
    }
    
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    
    bool isleftHeap = isMaxHeap(arr, n, left);
    bool isrightHeap = isMaxHeap(arr,n, right);
    
    if(right < n){
        if(arr[left] < arr[index] and arr[right] < arr[index] and isleftHeap and isrightHeap) {
            return true;
        } else {
            return false;
        }
    } else {
        if(arr[left] < arr[index] and isleftHeap) {
            return true;
        } else {
            return false;
        }
    }   
}

// Time Complexity : O(n) -> In a way similar to preorder travelsal of binary tree
// Auxillary Space : O(logn) i.e O(h)

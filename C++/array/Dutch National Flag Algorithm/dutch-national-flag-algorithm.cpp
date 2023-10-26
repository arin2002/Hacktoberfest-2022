/* Leetcode 75. Sort Colors: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example Input: [2,0,2,1,1,0]
        Output: [0,0,1,1,2,2]
*/

#include <bits/stdc++.h>
using namespace std;

//TC:O(n) SC:O(1)
void dutchNationalFlagAlgo(int arr[], int n){
    //Array is partitioned into 4 parts as the procedure continues.
    //0 to j-1 : 0s
    //j to i-1 : 1s
    //i to k : all the numbers whose correct place is yet to be determined
    //k to n-1 : 2s
    int i=0, j=0, k=n-1;
    while(i<=k){
        if(arr[i]==0){
            swap(arr[i], arr[j]);
            j++;
            i++;
        }
        else if(arr[i]==1) i++;
        else if(arr[i]==2){
            swap(arr[i], arr[k]);
            k--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    dutchNationalFlagAlgo(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}
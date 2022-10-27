/* LEETCODE QUES:
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.

example:
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;

int quickSelect(int arr[], int low, int high, int newk)
{
    int pivot = arr[high];
    int p = low;

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            int temp = arr[i];
            arr[i] = arr[p];
            arr[p] = temp;
            p += 1;
        }
    }

    //final swap
    int tempt = arr[high];
    arr[high] = arr[p];
    arr[p] = tempt;

    if (newk > p)
        return quickSelect(arr, p + 1, high, newk);
    else if (newk < p)
        return quickSelect(arr, low, p - 1, newk);
    else
        return arr[p];
}

int kthLargestElement(int arr[], int l, int r, int k)
{

    //1. Sorting - TC:nlogn
    // sort(arr, arr + r);
    // return arr[r + 1 - k];

    //2. Min Heap  TC:nlogk
    //our min heap will always contain k elements => push first k elements in the heap then check if nxt ele is greater than the ele at top of heap if yes then pop the top because min heap top will only give us smallest ele but we our trying to find the kth largest ele so we dont need smaller ele .. since the nxt ele was greater push it in the heap ... if it was smaller than top ele we would just discard it and likewise repeat the same for other ele
    //this way ...once we are done with all the ele of arr ..the ele on top oh min heap will be the required kth ele

    // priority_queue<int, vector<int>, greater<int>> min_heap;

    // for (int i = 0; i < k; i++)
    // {
    //     min_heap.push(arr[i]);
    // }

    // for (int i = k; i <= r; i++)
    // {
    //     if (arr[i] > min_heap.top())
    //     {
    //         min_heap.pop();
    //         min_heap.push(arr[i]);
    //     }
    // }
    // int req_largest_ele = min_heap.top();
    // return req_largest_ele;

    //3. Quick Select
    int newk = r + 1 - k;
    return quickSelect(arr, l, r, newk);
}

int main()
{
    int arr[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    cout << kthLargestElement(arr, 0, 8, 4);
    return 0;
}
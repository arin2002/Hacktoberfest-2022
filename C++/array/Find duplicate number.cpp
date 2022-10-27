/*  LC.287- Find the Duplicate Number

Given an array containing n+1 integers in the range [1, n] inclusive. There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and use only constant extra space. 
Example:    Input: [1,3,4,2,2]
            Output: 2

Time Complexity: O(n) 
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

/*Approach 1: Sort TC: O(nlogn) SC: O(logn)*/
/*Approach 2: Unordered Set(check if already exit in set, push if not) TC: O(n) SC: O(n)*/
/*Approach 3: Mark negative(track each number(n) that has been seen before by flipping the sign of the number located at index n) TC: O(n) SC: O(1)*/
/*Approach 4: Binary Search(find smallest no. such that count of no's less than or equal to it is greater than the number itself) TC: O(nlogn) SC: O(n)*/

// Approach 5: Floyd's Tortoise and Hare (Cycle Detection) TC: O(n) SC:O(1)
int findDuplicate(int nums[])
{
    int tortoise = nums[0];
    int hare = nums[0];

    // Find the intersection point of the two runners.
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);

    // Find the "entrance" to the cycle.
    tortoise = nums[0];
    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }

    return hare;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << findDuplicate(arr) << "\n";
    return 0;
} 
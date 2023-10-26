/*
    Given an array containing 2*n+2 positive numbers, out of which 2*n numbers exist in pairs 
    whereas the other two number occur exactly once and are distinct. Find the other two numbers.
    Example:    Input: {1, 2, 3, 2, 1, 4}
                Output: {3, 4}
    Time Complexity: O(n) 
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

// 1. Using sort TC: O(n*logn)
// 2. Using map TC: ordered - O(n*logn) & unordered - O(n);  SC: O(n)
// 3. Using set(if element already exists in set, remove it else add it to set)  TC: O(n)  SC: O(n)
// 4. Using XOR
vector<int> nonRepeatingNos(int arr[], int n)
{
    int xor = arr[0];   // Will hold Xor of all elements 
    int x = 0, y = 0;    // answers

    /* Get the Xor of all elements */
    for (int i = 1; i < n; i++)
        xor = xor ^ arr[i];

    /* Get the rightmost set bit in set_bit_no */
    int setBitNum = xor & ~(xor-1);

    /* Now divide elements in two sets by comparing rightmost set bit of xor with bit at same position in each element. */
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBitNum)   /*Xor of first set(whose bit is set at rightmost set bit position of xor (== 1)) */
            x = x ^ arr[i];
        else                     /*Xor of second set(== 0)*/
            y = y ^ arr[i];
    }

    vector<int> v;
    if(x > y)
        swap(x, y);
    v.push_back({x, y});
    return v;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v = nonRepeatingNos(arr, n);
    for(int val : v)
        cout << val << " ";
    cout << endl;
    return 0;
}
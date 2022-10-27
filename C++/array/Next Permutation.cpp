/*  LC.31- Next Permutation

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
The replacement must be in place and use only constant extra memory.

Example:    Input: [1,2,3]
            Output: [1,3,2]

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int start, int end)
{
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void nextPermutation(int a[], int n)
{
    int i = n - 2;
    while (i >= 0 && a[i + 1] <= a[i])
        i--;
    if (i >= 0) {
        int j = n - 1;
        while (a[j] <= a[i])
            j--;
        swap(a[i], a[j]);
    }
    reverse(a, i+1, n-1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    nextPermutation(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
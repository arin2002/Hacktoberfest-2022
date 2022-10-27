#include <bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch(int a[], int l, int r, int x)
{
  if (r >= l)
  {
    int mid = l + (r - l) / 2;
    if (a[mid] == x)
    {
      return mid + 1;
    }
    if (a[mid] > x)
    {
      return binarySearch(a, mid + 1, r, x);
    }
    return binarySearch(a, l, mid - 1, x);
  }
  return -1;
}
// Driver code
int main()
{
  int a[] = {100, 65, 43, 23, 87, 76, 95};
  int n = sizeof(a) / sizeof(a[0]);
  int x;
  cout << "Enter number to search" << endl;
  cin >> x;
  cout << binarySearch(a, 0, n - 1, x) << endl;
}
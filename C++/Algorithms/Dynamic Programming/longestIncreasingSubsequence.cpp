#include <bits/stdc++.h>
using namespace std;
//n^2 approach
int LIS(int n, int arr[])
{
    int dp[n] = {1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < dp[i])
            max = dp[i];
    }
    return max;
}

void test()
{
    int arr[] = {5, 6, 2, 3, 4, 1, 9, 9, 8, 9, 5};
    int A[] = {1, 2, 3, 4, 5, 6, 7, 14, 12};
    int B[5] = {9, 7, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(A) / sizeof(A[0]);
    cout << LIS(n, arr) << "\n";
    cout << LIS(m, A) << "\n";
    cout << LIS(5, B) << "\n";
}

int main()
{
    test();
    return 0;
}

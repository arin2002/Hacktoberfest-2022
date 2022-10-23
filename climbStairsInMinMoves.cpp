#include <bits/stdc++.h>
using namespace std;
int minimum(int a, int b)
{
    return a < b ? a : b;
}
int minMoves(int n, int arr[])
{
    int dp[n + 1] = {-1};
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            int mini = INT_MAX;
            for (int j = 1; j <= arr[i] && i + j <= n; j++)
            {
                if (dp[i + j] != -1)
                {
                    mini = minimum(mini, dp[i + j]);
                }
            }
            if (mini != INT_MAX)
            {
                dp[i] = mini + 1;
            }
        }
    }
    return dp[0];
}
int main()
{
    int n = 7;
    int arr[n] = {2, 3, 0, 1, 1, 5, 2};
    int moves = minMoves(n, arr);
    cout << moves << "\n";
    return 0;
}
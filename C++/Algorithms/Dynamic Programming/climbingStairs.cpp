#include <iostream>
using namespace std;
// method1 : using memoization
int countPaths(int n, int dp[])
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int nm1 = countPaths(n - 1, dp);
    int nm2 = countPaths(n - 2, dp);
    int nm3 = countPaths(n - 3, dp);

    int totalPath = nm1 + nm2 + nm3;
    dp[n] = totalPath;
    return totalPath;
}
// method2 : using tabulation
int countPathTab(int n)
{
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            dp[i] = dp[i - 1];
        }
        else if (i == 2)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        else
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
    }
    return dp[n];
}
int main()
{
    int n;
    // cin>>n;
    n = 7;
    int dp[n + 1] = {0};
    cout << "Using memoization: " << countPaths(n, dp) << "\n";
    cout << "Using tabulation: " << countPathTab(n) << "\n";
    return 0;
}
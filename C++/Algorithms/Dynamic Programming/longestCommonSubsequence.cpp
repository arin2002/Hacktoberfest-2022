#include <bits/stdc++.h>
using namespace std;

int LCS_Recursive(string a, string b, int n, int m)
{
    if (m == 0 || n == 0)
        return 0;

    if (a[n - 1] == b[m - 1])
        return 1 + LCS_Recursive(a, b, n - 1, m - 1);

    else
        return max(LCS_Recursive(a, b, n, m - 1), LCS_Recursive(a, b, n - 1, m));
}

int LCS_Memoised(string a, string b, int n, int m, vector<vector<int>> &dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (a[n - 1] == b[m - 1])
        return dp[n][m] = 1 + LCS_Memoised(a, b, n - 1, m - 1, dp);

    else
        return dp[n][m] = max(LCS_Memoised(a, b, n, m - 1, dp), LCS_Memoised(a, b, n - 1, m, dp));
}

int LCS_Tabulation(string a, string b)
{
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
    int n = a.size();
    int m = b.size();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[n][m];
}

void test()
{
    string a = "abcdrfew";
    string b = "acfrewdgh";
    cout << LCS_Recursive(a, b, a.size(), b.size()) << "\n";
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, -1));
    cout << LCS_Memoised(a, b, a.size(), b.size(), dp) << "\n";
    cout << LCS_Tabulation(a, b) << "\n";
}

int main()
{
    test();
    return 0;
}
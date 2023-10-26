// https://leetcode.com/problems/distinct-subsequences/
// Runtime: 24 ms, faster than 94.15% of C++ online submissions for Distinct Subsequences.
// Memory Usage: 10.8 MB, less than 77.13% of C++ online submissions for Distinct Subsequences.

class Solution {
    int dp[1010][1010];
    int MOD = 1e9;
public:
    int numDistinct(string s, string t) {
    int n = s.size();
    int m = t.size();
    dp[0][0] = (s[0] == t[0]) ? 1:0;
    for(int i = 1; i < n; i++)
        dp[i][0] = ((s[i] == t[0]) ? 1:0) + dp[i-1][0];
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            dp[i][j] = dp[i-1][j];
            // if(s[i] == t[i])
            dp[i][j] += (s[i] == t[j])?dp[i-1][j-1]:0;
            dp[i][j] %= MOD;
        }
    }
    return dp[n-1][m-1];
    }
};
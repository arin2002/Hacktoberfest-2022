// https://leetcode.com/problems/edit-distance/
// Runtime: 78 ms, faster than 21.00% of C++ online submissions for Edit Distance.
// Memory Usage: 7.4 MB, less than 76.77% of C++ online submissions for Edit Distance.

class Solution {
    int dp[510][510];
    const int INF = 1e5;
public:
    int minDistance(string word1, string word2) {
        
        cout << word1 << "\n" << word2;
        int n = word1.size();
        int m = word2.size();
        if(n == 0 || m == 0) return max(n,m);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                dp[i][j] = INF;
        if(word1[0] == word2[0]) dp[0][0] = 0;
        else dp[0][0] = 1;
        bool bio = false;
        for(int i = 1; i < n; i++)
        {
            dp[i][0] = dp[i-1][0] + 1;
            if(word1[i] == word2[0] && !bio) {
                bio = true;
                dp[i][0]--;
            }
        }
        bio = false;
        for(int j = 1; j < m; j++)
        {
            dp[0][j] = dp[0][j-1] + 1;
            if(word1[0] == word2[j] && !bio) {
                bio = true;
                dp[0][j]--;
            }
        }
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1])+1;
                dp[i][j] = min(dp[i][j], dp[i-1][j-1] + ((word1[i]==word2[j])?0:1));
            }
        }
        return dp[n-1][m-1];
    }
};
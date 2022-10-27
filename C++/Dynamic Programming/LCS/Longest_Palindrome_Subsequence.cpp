
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
        string t=s;
        int n = s.size(), m = s.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        reverse(t.begin(), t.end());
        
        for(int i=0;i<n;i++) dp[i][0]=0;
        for(int j=0;j<m;j++) dp[0][j]=0;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s[i-1]==t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                
                else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        return dp[n][m];
    }

int main()
{
    
    string s="agbcba";
    
    cout << "Longest Palindrome Subsequence: " << longestPalindrome(s);
    
    return 0;
}

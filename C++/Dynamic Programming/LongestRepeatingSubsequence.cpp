
/*
Given a string, find the length of the longest repeating subsequence such that the two subsequences don't have same string character at the same position, i.e., any i'th character in the two subsequences shouldn't have the same index in the original string.

 

Example 1:

Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".
*/

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.length();
 
            // Create and initialize DP table
            int dp[n+1][n+1];
            for (int i=0; i<=n; i++)
                for (int j=0; j<=n; j++)
                    dp[i][j] = 0;
        
            // Fill dp table (similar to LCS loops)
            for (int i=1; i<=n; i++)
            {
                for (int j=1; j<=n; j++)
                {
                    // If characters match and indexes are
                    // not same
                    if (str[i-1] == str[j-1] && i != j)
                        dp[i][j] =  1 + dp[i-1][j-1];         
                            
                    // If characters do not match
                    else
                        dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
            return dp[n][n];
	}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  
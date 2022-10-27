
/*
Given two strings str1 and str2. The task is to remove or insert the minimum number of characters from/in str1 so as to transform it into str2. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.

Example 1:

Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.*/

#include <bits/stdc++.h>
using namespace std;

  
class Solution{
		

	public:
	int LCS(string X, string Y, int m, int n){
        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
                else if(X[i-1] == Y[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes 
	    int len1 = str1.length();
	    int len2 = str2.length();
	    int lengthLCS = LCS(str1 , str2, len1, len2);
	    return len1+ len2 - (2*lengthLCS);
	    
	} 
};
 
int main() 
{
   	
   
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}
 
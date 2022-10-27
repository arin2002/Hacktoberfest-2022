
// Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

// Example 1:

// Input:
// A = 6, B = 6
// str1 = ABCDGH
// str2 = AEDFHR
// Output: 3
// Explanation: LCS for input Sequences
// “ABCDGH” and “AEDFHR” is “ADH” of
// length 3.
// Example 2:

// Input:
// A = 3, B = 2
// str1 = ABC
// str2 = AC
// Output: 2
// Explanation: LCS of "ABC" and "AC" is
// "AC" of length 2.



#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
 
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
  
    //Tabulation(Buttom-up)
     
    int lcs(int x, int y, string &s1, string &s2)
    {
        // your code here
        int dp[x+1][y+1];
         for (int i = 0; i < x+1; i++) 
         { 
            for (int j = 0; j < y+1; j++) 
            { 
                if (i == 0 || j == 0) 
                    dp[i][j] = 0; 
              
                else if (s1[i - 1] == s2[j - 1]) 
                    dp[i][j] = dp[i - 1][j - 1] + 1; 
              
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
            } 
          } 
        return dp[x][y];
 
    }
};


 
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
   
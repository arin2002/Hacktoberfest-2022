//Problem Link-https://leetcode.com/problems/wildcard-matching/

/* Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:
'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//Function returning boolean value to find  either the strings match or not
bool wildCardMatch(string str, string pattern) {
    int n=str.size() , m=pattern.size();
    //dp table to store results
    bool dp[n+1][m+1];
    //initialising the DP table
    memset(dp,false,sizeof(dp));

    //empty string can match with the empty pattern
    dp[0][0]=true;

    // Only incoming * can match with the empty string
    for(int j=1;j<=m;j++){
        if(pattern[j-1]=='*')
        dp[0][j]=dp[0][j-1];
    }

    //filling the table in  bottom up manner
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            //Case 1 :If character of string and pattern are same
            if(pattern[j-1]==str[i-1])
            dp[i][j]=dp[i-1][j-1];
            //Case 2:If the pattern character is a '?
            else if(pattern[j-1]=='?')
             dp[i][j]=dp[i-1][j-1];
             //case 3 : if pattern character is '*'
             else if(pattern[j-1]=='*')
             dp[i][j]=dp[i-1][j]||dp[i][j-1];
             else
             dp[i][j]=false;
        }
    }
    //last value of dp contains result of Problem
    return dp[n][m];
}
int main(){
    string str,pattern;
    cin>>str>>pattern;
    cout<<wildCardMatch(str,pattern);
    return 0;
}

/* 
Test Case 1:
Input: s = "aa", p = "a"
Output: false
Test Case 2:
Input: s = "aa", p = "*"
Output: true
Test Case 3:
Input: s = "cb", p = "?a"
Output: false
Test Case 4:
Input: s = "adceb", p = "*a*b"
Output: true
Time Complexity: O(n*m)
Space Complexity: O(n+m)
*/
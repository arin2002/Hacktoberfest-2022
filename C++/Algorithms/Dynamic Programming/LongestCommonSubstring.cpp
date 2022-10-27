#include<bits/stdc++.h>
using namespace std;

int LC_Substring(string a, string b,int n,int m)
{
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else dp[i][j] = 0;
        }
    }
    return dp[n][m];
}
int main(){
    string a = "abvdwe";
    string b = "abcdwe";
    cout<<LC_Substring(a,b,a.size(),b.size());
    return 0;
}
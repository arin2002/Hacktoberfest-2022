int dp[1006][1006];
int Solution::solve(string A, string B) {
    memset(dp,0,sizeof(dp));
    int n=A.size(),m=B.size();
    for(int i=0;i<=n;i++)dp[i][0]=0;
    for(int i=0;i<=m;i++)dp[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]==B[j-1])
            {
                dp[i][j]=(1+dp[i-1][j-1]);
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }   
        }
    }
    return dp[n][m];
}
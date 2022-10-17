#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int editdistance(char* arr1,char* arr2, int n,int m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(arr1[i-1]==arr2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
            {
                dp[i][j]=min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1])+1;
            }
        }
    }
    return dp[n][m];
}
int main()
{
    int res,n,m;
    char arr1[100],arr2[100];
    cin>>arr1;
    n=strlen(arr1);
    cin>>arr2;
    m=strlen(arr2);  
    
    res=editdistance(arr1,arr2,n,m);
    cout<<res;
    return 0;
}

class Solution{
public:
bool solve(int v[],int k,int i,vector<vector<int>>&dp)
{
    if(k==0)
    {
        return true;
    }
    if(i==0)
        return (v[0]==k);
    if(dp[i][k]!=-1)
        return dp[i][k];
    bool include=0;
    bool exclude=solve(v,k,i-1,dp);
    if(k>=v[i])
    {
        include=solve(v,k-v[i],i-1,dp);
    }
    return dp[i][k]=(exclude|include);
}
    int equalPartition(int n, int arr[])
    {
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        int part=(sum/2);
        vector<vector<int>>dp(n,vector<int>(part+1,-1));
        if(sum & 1)
        {
            return false;
        }
        return solve(arr,part,n-1,dp);
    }
};

class Solution {
public:
    int fun(vector<vector<int>>&matrix,int i,int j,vector<vector<int>>&dp){
        if(i==matrix.size()-1)return matrix[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int left=1e9,right=1e9,down=1e9;
        if(j!=0)left=matrix[i][j]+fun(matrix,i+1,j-1,dp);
     if(j!=matrix.size()-1)  right=matrix[i][j]+fun(matrix,i+1,j+1,dp);
        down=matrix[i][j]+fun(matrix,i+1,j,dp);
        int ans1=min(down,left);
        return dp[i][j]=min(ans1,right);
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=1e9;int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            ans=min(ans,fun(matrix,0,i,dp));
        }
        return ans;
    }
};

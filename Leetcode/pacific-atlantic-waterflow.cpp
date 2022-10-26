class Solution {
public:
    void solve(vector<vector<int>>&h,int m,int n,int r,int c,vector<vector<bool>>&vis){
        if(vis[r][c]==1)    return;
        vis[r][c]=1;
        if(r+1!=m && h[r][c]<=h[r+1][c])  solve(h,m,n,r+1,c,vis);
        if(r-1!=-1 && h[r][c]<=h[r-1][c])  solve(h,m,n,r-1,c,vis);
        if(c+1!=n && h[r][c]<=h[r][c+1])  solve(h,m,n,r,c+1,vis);
        if(c-1!=-1 && h[r][c]<=h[r][c-1])  solve(h,m,n,r,c-1,vis);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        int m=h.size(),n=h[0].size();
        vector<vector<bool>> pac(m,vector<bool>(n,false)),atl(m,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            solve(h,m,n,0,i,pac);
            solve(h,m,n,m-1,i,atl);
        }
        for(int i=0;i<m;i++){
            solve(h,m,n,i,0,pac);
            solve(h,m,n,i,n-1,atl);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pac[i][j]==1 && atl[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
//link:https://practice.geeksforgeeks.org/problems/number-of-distinct-islands/1

class Solution {
  public:
   void dfs(vector<vector<int>>& grid,int i,int j,int r,int c,vector<pair<int,int>>&v)
   {
        int rows=grid.size();
        int cols=grid[0].size();
        if(i>=rows || j>=cols || i<0 || j<0 || grid[i][j]==0) return ;
        
        grid[i][j]=0;
        v.push_back({i-r,j-c});
         dfs(grid,i+1,j,r,c,v);
         dfs(grid,i-1,j,r,c,v);
         dfs(grid,i,j+1,r,c,v);
         dfs(grid,i,j-1,r,c,v);
        
   }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int rows=grid.size();
        int cols=grid[0].size();
        set<vector<pair<int,int>>>s;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==1)
                {
                   vector<pair<int,int>>v;
                   dfs(grid,i,j,i,j,v);
                   s.insert(v);
                }
            }
        }
        return s.size();
    }
};
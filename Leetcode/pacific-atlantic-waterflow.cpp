/*There is an m x n rectangular island that borders both the Pacific Ocean and Atlantic Ocean. The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges.

The island is partitioned into a grid of square cells. You are given an m x n integer matrix heights where heights[r][c] represents the height above sea level of the cell at coordinate (r, c).

The island receives a lot of rain, and the rain water can flow to neighboring cells directly north, south, east, and west if the neighboring cell's height is less than or equal to the current cell's height. Water can flow from any cell adjacent to an ocean into the ocean.

Return a 2D list of grid coordinates result where result[i] = [ri, ci] denotes that rain water can flow from cell (ri, ci) to both the Pacific and Atlantic oceans.*/

#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int m,n;
    cout<<"Enter number of rows and columns: ";
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    cout<<"Enter heights: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    Solution *s=new Solution();
    vector<vector<int>> ans=s->pacificAtlantic(mat);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}

/*
Test Case 1:
Input: [[1,2,2,3,5],
[3,2,3,4,4],
[2,4,5,3,1],
[6,7,1,4,5],
[5,1,1,2,4]]
Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]

Test Case 2:
Input: [[1]]
Output: [[0,0]]
*/
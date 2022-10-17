#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
using namespace std;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

void bfs(queue<pair<int,int>>&q,vector<vector<bool>>&visited,int &r,int &c,vector<vector<int>>&a){
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int newx=x+dx[i];
            int newy=y+dy[i];
            
            if(newx<0 || newy<0 || newx>=r || newy>=c || visited[newx][newy]==true){
                continue;
            }
            if(a[x][y]<=a[newx][newy]){
                visited[newx][newy]=true;
                q.push({newx,newy});
            }
        }
    }
}
int solve(vector<vector<int> > &A) {
    int r=A.size();
    if(r==0){
        return 0;
    }
    int c=A[0].size();
    
    vector<vector<bool>>blue_visited(r,vector<bool>(c,false));
    vector<vector<bool>>red_visited(r,vector<bool>(c,false));
    
    queue<pair<int,int>>red;
    queue<pair<int,int>>blue;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            if(i==0 || j==0){
                blue.push({i,j});
                blue_visited[i][j]=true;
            }
            
            if(i==r-1 || j==c-1){
                red.push({i,j});
                red_visited[i][j]=true;
            }
        }
    }
    
    bfs(red,red_visited,r,c,A);
    bfs(blue,blue_visited,r,c,A);
    
    int ans=0;  
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(red_visited[i][j] && blue_visited[i][j]){
                ans++;
            }
        }
    }
    return ans;
    
}



int main() {
 
    
    return 0;
}
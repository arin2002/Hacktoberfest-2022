#include<bits/stdc++.h>
using namespace std;

int GridWays(int i,int j, int m, int n){
    if(i==m-1 and j==n-1){
        return 1;
    }
    if(i>=m or j>=n){
        return 0;
    }
    return GridWays(i+1,j,m,n)+GridWays(i,j+1,m,n);
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<GridWays(0,0,m,n);
}
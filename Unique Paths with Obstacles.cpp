#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;




int solve(int i,int j,int n,int m,vector<vector<int>> &A)
{
    if(i==n || j==m)
    return 0;
    
    if(A[i][j]==1)
    return 0;
    
    
    if(i==n-1 && j==m-1)
    return 1;
    
    return solve(i,j+1,n,m,A)+solve(i+1,j,n,m,A);
}


int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    return solve(0,0,n,m,A);
}
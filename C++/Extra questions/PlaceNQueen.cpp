#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>>res;
    string empty="";
    for(int i=0;i<n;i++) empty.push_back('.');
    vector<string>temp(n,empty);
    vector<bool>col(n,false),lower(2*n-1,false),upper(2*n-1,false);
    NQueen(res,temp,n,0,col,upper,lower);
    return res;
}   
void NQueen(vector<vector<string>>&res,vector<string>&temp,int n,int i,vector<bool>&col,vector<bool>&upper,vector<bool>&lower){
    if(i==n){
        res.push_back(temp);
    }
    for(int j=0;j<n;j++){
        if(!col[j] && !upper[i+j] && !lower[j-i+n-1]){
            temp[i][j]='Q';
            col[j]=true;
            upper[i+j]=true;
            lower[n-1+j-i]=true;
            NQueen(res,temp,n,i+1,col,upper,lower);
            temp[i][j]='.';
            col[j]=false;
            upper[i+j]=false;
            lower[n-1+j-i]=false;
        }
    }
}

int main() {
	int n;
	cin>>n;
	cout<<solveNQueens(n);
	return 0;
}

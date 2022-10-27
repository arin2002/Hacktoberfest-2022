#include<bits/stdc++.h>
using namespace std;
/*
problem link = https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1
*/
int solve(int *arr, int i, int j, vector<vector<int>> &memo){
        if(i>=j){
                return 0;
        }
        //
        if(memo[i][j] != -1){
                return memo[i][j];
        }

        int smallest= INT_MAX;
        for (int k = i; k < j; k++){
                int tempans= solve(arr, i, k, memo) 
                                        + solve(arr, k+1, j, memo) 
                                        + ( arr[i-1] * arr[k] * arr[j]);
                smallest = min(smallest, tempans);
        }
        return memo[i][j]=smallest;
}

int main() {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0;i<size;i++)
                cin >> arr[i];

        vector<vector<int>> memo(size + 1, vector<int>(size + 1, -1));

        cout<<solve(arr, 1, size-1, memo)<<endl;
}
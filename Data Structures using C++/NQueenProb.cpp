#include <bits/stdc++.h>

using namespace std;

bool isSafe(int row, int col,vector<vector<int>> ds, int n)
{
    // safe guarding the value
    int nRow = row;
    int nCol = col;

    while ((nRow >= 0) && (nCol >= 0))
    {
        if (ds[nRow--][nCol--] == 1)
            return false;
    }

    nRow = row;
    nCol = col;
    while (nCol >= 0)
    {
        if (ds[nRow][nCol--] == 1)
            return false;
    }

    nCol = col;
    while ((nRow < n) && (nCol >= 0))
    {
        if (ds[nRow++][nCol--] == 1)
            return false;
    }

    return true;
}

void helper(int col, int n, vector<vector<int>> &ds, vector<vector<vector<int>>> &ans)
{
    // Base case
    if (col == n)
    {
        ans.push_back(ds);
        // ans = ds;
        return;
    }

    // Recursive case
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, ds, n))
        {
            ds[row][col] = 1;
            helper(col + 1, n, ds, ans);
            ds[row][col]= 0; // Backtracking (removing the Q);
        }
    }
}

void solveNQueens(int n)
{
    // vector<vector<int>> ans;
    if(n==0){
        cout<<"{}"<<endl;
        cout<<"0";
        return;
    }
    vector<vector<vector<int>>> ans;
    vector<vector<int>> ds(n, vector<int>(n,0));

    helper(0, n, ds, ans);

    reverse(ans.begin(), ans.end());

    int count=0;
    if(ans.size()){
        for(int i=0; i < ans.size() ; i++){
            for(int j =0; j < ans[i].size(); j++){
                for(int k=0; k < ans[i][j].size(); k++){
                    // cout<<ans[i][j][k]<<" ";
                    if(ans[i][j][k] == 1){
                        cout<<"{"<<j+1<<"-"<<k+1<<"}";
                        count = i+1;
                    }
                }
                // cout<<endl;
                if(!(i==ans.size()-1 && j==ans[i].size()-1))cout<<" ";

            }
            // cout<<endl;
            if(i!= ans.size()-1) cout<<" ";
            else if(i == ans.size()-1){
                cout<<endl;
            }
        }
    }
    cout<<count;
}

int main()
{
    int n;
    cin >> n;
    solveNQueens(n);

    return 0;
}

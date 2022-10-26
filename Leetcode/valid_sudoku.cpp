/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
            vector<int> v(10,0);
            for(int j=0;j<9;j++){
                if(b[i][j]=='.')    continue;
                v[b[i][j]-'0']++;
                if(v[b[i][j]-'0']>1)    return false;
            }
        }
        for(int i=0;i<9;i++){
            vector<int> v(10,0);
            for(int j=0;j<9;j++){
                if(b[j][i]=='.')    continue;
                v[b[j][i]-'0']++;
                if(v[b[j][i]-'0']>1)    return false;
            }
        }
        vector<vector<vector<int>>> v(3,vector<vector<int>> (3,vector<int>(10,0)));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.')    continue;
                int r,c;
                r=i/3;
                c=j/3;
                v[r][c][b[i][j]-'0']++;
                if(v[r][c][b[i][j]-'0']>1)  return false;
            }
        }
        return true;
    }
};

int main(){
    vector<vector<char>> board;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    Solution *s=new Solution();
    if(s->isValidSudoku(board)) cout<<"true";
    else cout<<"false";
    return 0;
}

/*
Test case 1:
Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

Test case 2:
Input: board = 
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: false
*/
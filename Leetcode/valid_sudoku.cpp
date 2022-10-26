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
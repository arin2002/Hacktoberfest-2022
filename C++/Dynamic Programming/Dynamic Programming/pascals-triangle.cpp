class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>v;
        vector<vector<int> > v1;
        int arr[numRows][numRows];
        int n= numRows;
        for (int i = 0; i < n; i ++){
            arr[i][0] = 1;
        }
        for (int i = 0; i < n; i ++){
            arr[i][i] = 1;
        }
        for (int i = 2; i < n; i ++){
            for (int j = 1; j <= i; j ++){
                if (i != j){
                    arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                }
            }
        }
        for (int i = 0; i < n; i ++){
            v.clear();
            for (int j = 0; j <= i; j++){
                v.push_back(arr[i][j]);
            }
            v1.push_back(v);
        }
        return v1;
    }
};
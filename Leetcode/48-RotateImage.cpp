#include<bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); i++){
        for(int j =0;  j < matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
class Solution {
    public:
        void rotate(vector<vector<int> > &matrix) {
            int n = matrix.size();
            // transposing the matrix
            for(int i = 0; i < n; i++){
                int j = 0;
                while(j < i){
                    // can't traverse whole matrix because that swaps 2 times of ij element and that make it to the original form
                        swap(matrix[i][j], matrix[j][i]);
                    j++;
                }
            }
            // rotating
            for(int i =0; i < n; i++){
                for(int j = 0; j < n/2; j++){
                    swap(matrix[i][j], matrix[i][n-j-1]);
                }
            }
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>matrix = { {1,2,3},{4,5,6},{7,8,9} };
    Solution obj;
    obj.rotate(matrix);
    printMatrix(matrix);
    return 0;
}
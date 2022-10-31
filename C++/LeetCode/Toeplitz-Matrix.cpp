bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool ans = true;
        int m = matrix.size(), n = matrix[0].size(), row, column;
        
        for(int i=0 ; i<m*n ; i++){
            row = i/n, column = i%n;
            if(row < m-1 && column < n-1){
                if(matrix[row][column] != matrix[(i+n+1)/n][(i+n+1)%n]){
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
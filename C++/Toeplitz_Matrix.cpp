class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
         const int rows = matrix.size();
        const int cols = matrix[0].size();
        for (int r = 1; r < rows; ++r)
            for (int c = 1; c < cols; ++c)
                if (matrix[r][c] != matrix[r - 1][c - 1]) return false;
        
        return true;
    }
};
class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, vector<pair<int, int>> &distinct, int baseRow, int baseCol)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        distinct.push_back({row - baseRow, col - baseCol});

        int delta_row[] = {-1, 0, 1, 0};
        int delta_col[] = {0, -1, 0, 1};

        for (int i = 0; i < 4; i++)
        {
            int n_row = row + delta_row[i];
            int n_col = col + delta_col[i];

            if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m)
            {
                if (!vis[n_row][n_col] && grid[n_row][n_col] == 1)
                {
                    dfs(n_row, n_col, vis, grid, distinct, baseRow, baseCol);
                }
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    vector<pair<int, int>> distinct;
                    dfs(i, j, vis, grid, distinct, i, j);
                    st.insert(distinct);
                }
            }
        }
        return st.size();
    }
};

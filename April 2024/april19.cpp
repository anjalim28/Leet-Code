class Solution
{
public:
    void dfs(vector<vector<char>> &grid, int m, int n, int i, int j)
    {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
        {
            return;
        }
        if (grid[i][j] == '1')
        {
            grid[i][j] = '0';
            dfs(grid, m, n, i + 1, j);
            dfs(grid, m, n, i - 1, j);
            dfs(grid, m, n, i, j + 1);
            dfs(grid, m, n, i, j - 1);
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, m, n, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};
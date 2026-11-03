class Solution {
   public:
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int numIslands(vector<vector<char>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        int res = 0;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    res++;
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int R = grid.size();
        int C = grid[0].size();
        if (i < 0 || j < 0 || i >= R || j >= C || grid[i][j] == '0') return;
        grid[i][j] = '0';
        for (int x = 0; x < 4; x++) {
            dfs(grid, i + dir[x][0], j + dir[x][1]);
        }
    }
};
class Solution {
public:
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int res = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (grid[i][j] == 1) {
                    int cur=0;
                    dfs(grid, i, j, cur);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int i, int j, int& cur) {
        int R = grid.size();
        int C = grid[0].size();
        if (i < 0 || j < 0 || i >= R || j >= C || grid[i][j] == 0) return;
        grid[i][j] = 0;
        cur++;
        res = max(res, cur);
        for (int x = 0; x < 4; x++) {
            dfs(grid, i + dir[x][0], j + dir[x][1], cur);
        }
    }
};

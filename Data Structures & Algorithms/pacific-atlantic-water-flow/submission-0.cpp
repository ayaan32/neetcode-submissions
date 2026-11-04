class Solution {
public:
vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int R = heights.size();
        int C = heights[0].size();
        vector<vector<bool>> pac(R, vector<bool>(C, false));
        vector<vector<bool>> atl(R, vector<bool>(C, false));
        for(int c=0; c<C; c++) {
            dfs(0, c, pac, heights);
            dfs(R-1, c, atl, heights);
        }
        for(int r=0; r<R; r++) {
            dfs(r,0,pac, heights);
            dfs(r, C-1, atl, heights);
        }
        vector<vector<int>> res;
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                if (pac[r][c] && atl[r][c]) {
                    res.push_back({r, c});
                }
            }
        }
        return res;
    }
    void dfs(int r, int c, vector<vector<bool>>& ocean, vector<vector<int>>& heights) {
        ocean[r][c] = true;
        for(auto [dr, dc] : directions) {
            int nr = r+dr, nc = c+dc;
            if(nr>=0 && nr<heights.size() && nc >= 0 && nc<heights[0].size() && !ocean[nr][nc] && heights[nr][nc] >= heights[r][c]) {
                dfs(nr, nc, ocean, heights);
            }
        }
    }
};

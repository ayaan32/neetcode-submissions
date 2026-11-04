class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fresh = 0;
        int time = 0;
        int R=grid.size(), C=grid[0].size();
        for(int r=0; r<R; r++) {
            for(int c=0; c<C; c++) {
                if(grid[r][c] == 1) {
                    fresh++;
                }
                if(grid[r][c] == 2) {
                    q.push({r, c});
                }
            }
        }
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while(fresh>0 && !q.empty()) {
            int len = q.size();
            for(int i=0; i<len; i++) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for(auto dir : directions) {
                    int row = r + dir.first;
                    int col = c + dir.second;
                    if(row >= 0 && row<R && col>=0 && col<C && grid[row][col] == 1) {
                        grid[row][col] = 2;
                        q.push({row, col});
                        fresh--;
                    }
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};

class Solution {
public:
    int R,C;
    vector<vector<int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    void solve(vector<vector<char>>& board) {
        R = board.size();
        C = board[0].size();
        capture(board);
        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                if (board[r][c] == 'O') {
                    board[r][c] = 'X';
                } else if (board[r][c] == 'T') {
                    board[r][c] = 'O';
                }
            }
        }
    }

    void capture(vector<vector<char>>& board) {
        queue<pair<int, int>> q;
        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                if ((r == 0 || r == R - 1 ||
                    c == 0 || c == C - 1) &&
                    board[r][c] == 'O') {
                    q.push({r, c});
                }
            }
        }
        while(!q.empty()) {
            auto [r,c] = q.front();
            q.pop();
            if(board[r][c] == 'O') {
                board[r][c] = 'T';
                for(auto d : dir) {
                    int nr = r+d[0];
                    int nc = c+d[1];
                    if(nr>=0 && nr<R && nc>=0 && nc<C) {
                        q.push({nr, nc});
                    }
                }
            }
        }
    }
};

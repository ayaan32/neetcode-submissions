class Solution {
   public:
    bool exist(vector<vector<char>>& board, string word) {
        int R = board.size();
        int C = board[0].size();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int r, int c, int i) {
        int R = board.size();
        int C = board[0].size();
        if(word.size() == i) {
            return true;
        }
        if(r>=R || c>=C || r<0 || c<0 || board[r][c] == '#' || board[r][c] != word[i]) return false;
        board[r][c] = '#';
        bool res = dfs(board, word, r+1, c, i+1) ||
        dfs(board, word, r-1, c, i+1) ||
        dfs(board, word, r, c+1, i+1) ||
        dfs(board, word, r, c-1, i+1);
        board[r][c] = word[i];
        return res;
    }
};

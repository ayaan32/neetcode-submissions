class Solution {
public:
    int R, C;
    bool exist(vector<vector<char>>& board, string word) {
        R = board.size();
        C = board[0].size();
        for(int i=0; i<R; i++) {
            for(int j=0; j<C; j++) {
                if(dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word, int r, int c, int i) {
        if(i == word.size()) {
            return true;
        }
        if(r>=R || r<0 || c>=C || c<0 || board[r][c] != word[i] || board[r][c] == '#') return false;
        board[r][c] = '#';
        bool res = dfs(board, word, r+1, c, i+1) ||
        dfs(board, word, r-1, c, i+1) ||
        dfs(board, word, r, c+1, i+1) ||
        dfs(board, word, r, c-1, i+1);
        board[r][c] = word[i];
        return res;
    }
};

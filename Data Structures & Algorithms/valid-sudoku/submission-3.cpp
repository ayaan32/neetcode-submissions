class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rset, cset, sqset;
        int R = board.size();
        int C = board[0].size();
        for(int r=0; r<R; r++) {
            for(int c=0; c<C; c++) {
                char d = board[r][c];
                if(d == '.') continue;
                int box = (r/3) * 3 + c/3; // not good prolly
                if(rset[r].count(d) || cset[c].count(d) || sqset[box].count(d)) {
                    return false;
                }
                rset[r].insert(d);
                cset[c].insert(d);
                sqset[box].insert(d);
            }
        }
        return true;
    }
};
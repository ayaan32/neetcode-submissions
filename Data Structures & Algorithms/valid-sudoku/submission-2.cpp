class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> r,c;
        map<pair<int, int>, unordered_set<int>> sq;
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                pair<int, int> s = {i/3, j/3};
                if(board[i][j] == '.') continue;
                if(r[i].count(board[i][j]) || c[j].count(board[i][j]) || sq[s].count(board[i][j])) return false;
                r[i].insert(board[i][j]);
                c[j].insert(board[i][j]);
                sq[s].insert(board[i][j]);
            }
        }
        return true;
    }
};

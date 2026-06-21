class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') continue;
                
                string r = string(to_string(board[i][j])) + " in row " + to_string(i);
                string c = string(to_string(board[i][j])) + " in col " + to_string(j);
                string b = string(to_string(board[i][j])) + " in box " + to_string(i/3) + "-" + to_string(j/3);
                
                if (seen.count(r) || seen.count(c) || seen.count(b)) return false;
                
                seen.insert(r);
                seen.insert(c);
                seen.insert(b);
            }
        }
        return true;
    }
};

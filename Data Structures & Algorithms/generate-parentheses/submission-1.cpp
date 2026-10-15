class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        backtrack(n, "", 0, 0);
        return res;
    }

    void backtrack(int n, string cur, int open, int close) {
        if(open == close && open == n) {
            // if(isSafe(cur)) {
                res.push_back(cur);
                return;
            // }
        }
        if(open < n) {
            cur += '(';
            backtrack(n, cur, open+1, close);
            cur.pop_back();
        }
        if(close < open) {
            cur += ')';
            backtrack(n, cur, open, close+1);
            cur.pop_back();
        }
    }

    // bool isSafe(string cur) {
    //     int count = 0;
    //     for(int i=0; i<cur.size(); i++) {
    //         count = cur[i] == '(' ? 1 : -1;
    //         if(count<0) return false;
    //     }
    //     return true;
    // }
};

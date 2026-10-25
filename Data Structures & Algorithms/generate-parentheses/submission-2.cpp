class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        dfs(n, "", 0, 0);
        return res;
    }

    void dfs(int n, string cur, int open, int close) {
        if(open == close && open == n) {
            res.push_back(cur);
            return;
        }
        if(open<n) {
            cur+='(';
            dfs(n, cur, open+1, close);
            cur.pop_back();
        }
        if(close<open) {
            cur += ')';
            dfs(n, cur, open, close+1);
            cur.pop_back();
        }
    }
};

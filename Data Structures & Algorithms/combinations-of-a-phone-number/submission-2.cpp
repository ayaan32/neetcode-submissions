class Solution {
public:
    vector<string> res;
    vector<string> mp = {"", "", "abc", "def", "ghi", "jkl",
                                  "mno", "qprs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        dfs(digits, "", 0);
        return res;
    }

    void dfs(string digits, string s, int i) {
        if(s.size() == digits.size()) {
            res.push_back(s);
            return;
        }
        string c = mp[digits[i] - '0'];
        for(char j : c) {
            dfs(digits, s+j, i+1);
        }
    }
};

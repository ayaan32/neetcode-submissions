class Solution {
public:
    vector<string> res;
    vector<string> key = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return res;
        dfs(digits, "", 0);
        return res;
    }

    void dfs(string digits, string s, int i) {
        if(i==digits.size()) {
            res.push_back(s);
            return;
        }
        string c = key[digits[i]-'0'];
        for(char j : c) {
            dfs(digits, s+j, i+1);
        }
    }
};

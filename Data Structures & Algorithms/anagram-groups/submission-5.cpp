class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        for(string s : strs) {
            vector<int> keyV(26,0);
            for(char ch : s) {
                keyV[ch-'a']++;
            }
            string key="";
            for(int i=0; i<26; i++) {
                key+=keyV[i];
            }
            mp[key].push_back(s);
        }
        for(auto i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};

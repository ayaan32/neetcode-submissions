class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        for(string s : strs) {
            vector<int> ca(26,0);
            for(char c : s) {
                ca[c-'a']++;
            }
            string key = "";
            key+=ca[0];
            for(int i=1; i<26; i++) {
                key+= ',' + ca[i];
            }
            mp[key].push_back(s);
        }
        for(auto i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};

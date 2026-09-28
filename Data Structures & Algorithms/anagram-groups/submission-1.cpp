class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for(auto s : strs) {
            vector<int> key(26, 0);
            for(auto ch : s) {
                key[ch - 'a']++;
            }
            string skey = to_string(key[0]);
            for(int i=1; i<26; i++) {
                skey+= ',' + to_string(key[i]);
            }
            mp[skey].push_back(s);
        }
        vector<vector<string>> res;
        for(auto i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for(int i=0;i<strs.size();i++) {
            string currKey = strs[i];
            sort(currKey.begin(), currKey.end());
            map[currKey].push_back(strs[i]);
        }
        for(auto i : map) {
            res.push_back(i.second);
        }
        return res;
    }
};

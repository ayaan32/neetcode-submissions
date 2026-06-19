class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i : nums) {
            map[i]++;
        }
        vector<pair<int, int>> freq;
        for(auto &i : map) {
            freq.push_back({i.second, i.first});
        }
        sort(freq.rbegin(), freq.rend());
        vector<int> res; 
        for(int i=0; i<k; i++) {
            res.push_back(freq[i].second);
        }
        return res;
    }
};

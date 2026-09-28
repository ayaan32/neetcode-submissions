class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> freq(n+1);
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i : nums) {
            mp[i]++;
        }
        for(auto i : mp) {
            freq[i.second].push_back(i.first);
        }
        for(int i=n; i>0; i--) {
            for(int i : freq[i]) {
                res.push_back(i);
                if(res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};

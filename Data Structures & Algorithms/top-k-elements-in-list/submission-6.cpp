class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> hp;
        for (auto i : mp) {
            hp.push({i.second, i.first});
            if (hp.size() > k) hp.pop();
        }
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(hp.top().second);
            hp.pop();
        }
        return res;
    }
};

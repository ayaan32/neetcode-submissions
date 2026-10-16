class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i : nums) {
            mp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto i : mp) {
            minHeap.push({i.second, i.first});
            if(minHeap.size() > k) minHeap.pop();
        }
        vector<int> res;
        for(int i=0; i<k; i++) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};

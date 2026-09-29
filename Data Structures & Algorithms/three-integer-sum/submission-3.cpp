class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            unordered_set<int> seen;
            for(int j=i+1; j<n; j++) {
                if(seen.find(target - nums[j]) != seen.end()) {
                    res.push_back({nums[i], nums[j], target-nums[j]});
                    while(j+1<n && nums[j] == nums[j+1]) j++;
                }
                seen.insert(nums[j]);
            }
        }
        return res;
    }
};

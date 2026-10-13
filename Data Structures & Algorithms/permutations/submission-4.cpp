class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        dfs(0, {}, 0, nums, target);
        return res;
    }
    void dfs(int idx, vector<int> path, int cur, vector<int>& nums, int target) {
        if(cur == target) {
            res.push_back(path);
            return;
        }
        for(int i = idx; i< nums.size(); i++) {
            if(i>idx && nums[i] == nums[i-1]) continue;
            if(cur + nums[i] > target) break;
            path.push_back(nums[i]);
            dfs(i+1, path, cur+nums[i], nums, target);
            path.pop_back();
        }
    }
};

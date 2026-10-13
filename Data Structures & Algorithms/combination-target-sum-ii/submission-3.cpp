class Solution {
   public:
    // vector<vector<int>> res;
    set<vector<int>> seen;
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        dfs(nums, target, {}, 0);
        return vector<vector<int>>(seen.begin(), seen.end());
    }

    void dfs(vector<int>& nums, int target, vector<int> cur, int i) {
        if (target == 0) {
            seen.insert(cur);
            return;
        }
        if (target < 0 || i >= nums.size()) {
            return;
        }
        cur.push_back(nums[i]);
        dfs(nums, target - nums[i], cur, i + 1);
        cur.pop_back();
        while (i+1 < nums.size() && nums[i] == nums[i+1]) {
            i++;
        } dfs(nums, target, cur, i + 1);
    }
};

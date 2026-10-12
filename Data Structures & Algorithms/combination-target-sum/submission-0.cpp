class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        rec(nums, target, cur, 0, 0);
        return res;
    }

    void rec(vector<int>& nums, int target, vector<int>& cur, int i, int sum) {
        if(target == sum) {
            res.push_back(cur);
            return;
        }
        if(target < sum || i >= nums.size()) {
            return;
        }
        cur.push_back(nums[i]);
        rec(nums, target, cur, i, sum + nums[i]);
        cur.pop_back();
        rec(nums, target, cur, i+1, sum);
    }
};

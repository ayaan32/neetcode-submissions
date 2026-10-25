class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        sort(nums.begin(), nums.end());
        dfs(nums, cur, 0);
        return res;
    }

    void dfs(vector<int>& nums, vector<int>& cur, int i) {
        if(i >= nums.size()) {
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        dfs(nums, cur, i+1);
        cur.pop_back();
        while(i+1<nums.size() && nums[i+1] == nums[i]) i++;
        dfs(nums, cur, i+1);
    }
};

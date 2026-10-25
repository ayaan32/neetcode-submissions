class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        rec(nums, cur, 0);
        return res;
    }
    void rec(vector<int>& nums, vector<int>& cur, int i) {
        if(i == nums.size()) {
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        rec(nums, cur, i+1);
        cur.pop_back();
        rec(nums, cur, i+1);
    }
};

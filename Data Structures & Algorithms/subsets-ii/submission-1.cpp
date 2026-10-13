class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        rec(nums, 0, {});
        return res;
    }

    void rec(vector<int>& nums, int i, vector<int> cur) {
        if(i == nums.size()) {
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        rec(nums, i+1, cur);
        cur.pop_back();
        while(i<nums.size()-1 && nums[i] == nums[i+1]) i++;
        rec(nums, i+1, cur);
    }
};

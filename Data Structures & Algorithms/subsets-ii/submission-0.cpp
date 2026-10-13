class Solution {
public:
    set<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        rec(nums, 0, {});
        return vector<vector<int>>(res.begin(), res.end());
    }

    void rec(vector<int>& nums, int i, vector<int> cur) {
        if(i == nums.size()) {
            res.insert(cur);
            return;
        }
        cur.push_back(nums[i]);
        rec(nums, i+1, cur);
        cur.pop_back();
        rec(nums, i+1, cur);
    }
};

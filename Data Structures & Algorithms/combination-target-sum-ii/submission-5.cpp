class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> cur;
        dfs(candidates, target, cur, 0);
        return res;
    }
    void dfs(vector<int>& candidates, int target, vector<int>& cur, int i) {
        if(target == 0) {
            res.push_back(cur);
            return;
        }
        else if(target < 0 || i>=candidates.size()) {
            return;
        }
        cur.push_back(candidates[i]);
        dfs(candidates, target-candidates[i], cur, i+1);
        cur.pop_back();
        while(i+1<candidates.size() && candidates[i] == candidates[i+1]) i++;
        dfs(candidates, target, cur, i+1);
    }
};

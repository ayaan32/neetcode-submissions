class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        int n = nums.size();
        unordered_set<int> seen;
        for(int i : nums) {
            seen.insert(i);
        }
        for(int i : nums) {
            if(seen.find(i-1) == seen.end()) {
                int len = 0;
                while(seen.find(i+len) != seen.end()) {
                    len++;
                }
                res = max(res, len);
            }
        }
        return res;
    }
};

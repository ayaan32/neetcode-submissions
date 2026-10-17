class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int lcs = 0;
        for(int i : seen) {
            if(seen.find(i-1) == seen.end()) {
                int len = 1;
                while(seen.count(i+len)) {
                    len++;
                }
                lcs = max(lcs, len);
            }
        }
        return lcs;
    }
};

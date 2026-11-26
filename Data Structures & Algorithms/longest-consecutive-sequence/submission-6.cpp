class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i : nums) {
            seen.insert(i);
        }
        int lc=0;
        for(auto i : seen) {
            int len=1;
            if(!seen.contains(i-1)) {
                while(seen.contains(i+len)) len++;
            }
            lc = max(lc,len);
        }
        return lc;
    }
};

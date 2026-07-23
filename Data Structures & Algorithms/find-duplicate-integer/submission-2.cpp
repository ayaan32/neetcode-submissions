class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> seen(n,0);
        for(int i=0; i<n; i++) {
            if(seen[nums[i]-1]==1) {
                return nums[i];
            }
            seen[nums[i]-1] = 1;
        }
        return -1;
    }
};

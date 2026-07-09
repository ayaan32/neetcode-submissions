class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<=r) {
            int k = l + (r-l)/2;
            if(target == nums[k]) return k;
            if(nums[l] <= nums[k]) {
                if(target<nums[l] || target > nums[k]) {
                    l = k+1;
                } else {
                    r = k-1;
                }
            } else {
                if(target<nums[k] || target>nums[r]) {
                    r=k-1;
                } else {
                    l=k+1;
                }
            }
        }
        return -1;
    }
};

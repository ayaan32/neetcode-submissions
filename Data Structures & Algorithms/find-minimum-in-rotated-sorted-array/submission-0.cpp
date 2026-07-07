class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<r) {
            int k = l + (r-l)/2;
            if(nums[k]<nums[r]) {
                r=k;
            } else {
                l=k+1;
            }
        }
        return nums[l];
    }
};

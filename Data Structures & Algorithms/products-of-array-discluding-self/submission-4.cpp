class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(nums.size(), 1);
        for(int i=1; i<nums.size(); i++) {
            res[i] = res[i-1] * nums[i-1];
        }
        int pre = 1;
        for(int i=n-1; i>=0; i--) {
            res[i] = res[i] * pre;
            pre*=nums[i];
        }
        return res;
    }
};

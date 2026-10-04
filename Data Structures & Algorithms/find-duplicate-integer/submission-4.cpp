class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0, fast=0;
        while(true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast) break;
        }
        int cur = 0;
        while(true) {
            slow = nums[slow];
            cur = nums[cur];
            if(slow == cur) return slow;
        }
    }
};

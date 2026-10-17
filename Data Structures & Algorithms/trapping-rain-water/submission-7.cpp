class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0, r=n-1;
        int area = 0;
        int lm = height[l], rm=height[r];
        while(l<r) {
            if(lm < rm) {
                l++;
                lm = max(lm, height[l]);
                area += lm - height[l];
            } else {
                r--;
                rm = max(rm, height[r]);
                area += rm - height[r];
            }
            // area += min(height[l], height[r]) - height[k];
            // if(height[l] <= height[r]) l++;
            // else r--;
            // k++;
        }
        return area;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        int l=0, r=n-1;
        int lmax = height[l], rmax = height[r];
        int area = 0;
        while(l<r) {
            if(height[l] <= height[r]) {
                l++;
                lmax = max(lmax, height[l]);
                area += lmax - height[l];
            } else {
                r--;
                rmax = max(rmax, height[r]);
                area += rmax - height[r];
            }
        }
        return area;
    }
};

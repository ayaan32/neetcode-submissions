class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lm,rm,area,l,r;
        lm = rm = area = 0;
        l=0;
        r=n-1;
        while(l<r) {
            if(height[l]<height[r]) {
                if(lm>height[l]) {
                    area+=lm-height[l];
                } else {
                    lm = height[l];
                }
                l++;
            } else {
                if(rm>height[r]) {
                    area+=rm-height[r];
                } else {
                    rm = height[r];
                }
                r--;
            }
        }
        return area;
    }
};

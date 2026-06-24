class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int area = 0;
        int minH;
        int l=0;
        int r=n-1;
        while(l<r) {
            minH = min(heights[l], heights[r]);
            area = max(area, minH*(r-l));
            if(heights[l] <= heights[r]) {
                l++;
            } else r--;
        }
        return area;
    }
};

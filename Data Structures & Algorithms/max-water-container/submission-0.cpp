class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int area = 0;
        int minH;
        for(int i = 0; i< n; i++) {
            for(int j = i+1; j<n; j++) {
                minH = min(heights[i],heights[j]);
                area = max(area, minH*(j-i));
            }
        }
        return area;
    }
};

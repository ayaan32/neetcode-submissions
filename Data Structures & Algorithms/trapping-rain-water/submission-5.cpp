class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) {
            return 0;
        }
        stack<int> st;
        int area=0, n=height.size();
        for(int i=0;i<n;i++) {
            while(!st.empty() && height[i]>=height[st.top()]) {
                int mid = height[st.top()];
                st.pop();
                if(!st.empty()) {
                    int r = height[i];
                    int l = height[st.top()];
                    int w = i-st.top()-1;
                    area+=(min(r,l) - mid)*w;
                }
            }
            st.push(i);
        }
        return area;
    }
};

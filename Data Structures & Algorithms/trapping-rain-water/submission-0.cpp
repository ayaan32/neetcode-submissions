class Solution {
public:
    int trap(vector<int>& height) {
        int prem=0,sufm=0,res=0, n=height.size();
        vector<int> pre(n), suf(n);
        for(int i=0;i<n;i++) {
            prem = max(prem, height[i]);
            pre[i] = prem;
        }
        for(int i=n-1;i>0;i--) {
            sufm = max(sufm, height[i]);
            suf[i] = sufm;
        }
        for(int i=0;i<n;i++) {
            res+=min(pre[i], suf[i]) - height[i];
        }
        return res;
    }
};

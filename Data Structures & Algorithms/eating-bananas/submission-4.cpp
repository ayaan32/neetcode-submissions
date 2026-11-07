class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int l = 1, r = piles[n-1];
        int res=r;
        while(l<=r) {
            int m = l+(r-l)/2;
            long long cur=0;
            for(int i : piles) {
                cur+=(i + m - 1)/m;
            }
            if(cur <= h) {
                res = m;
                r = m-1;
            }
            if(cur>h) l=m+1;
        }
        return res;
    }
};

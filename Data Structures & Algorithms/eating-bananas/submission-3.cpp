class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(), piles.end()), res=r;
        while(l<=r) {
            int k= l+(r-l)/2;
            int time=0;
            for(int i : piles) {
                time += (i+k-1)/k;
            }
            if(time<=h) {
                res = k;
                r=k-1;
            } else {
                l=k+1;
            }
        }
        return res;
    }
};

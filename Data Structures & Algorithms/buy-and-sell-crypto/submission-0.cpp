class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l=0, r=1;
        int maxP = 0;
        while(r<n) {
            if(prices[r]>prices[l]) {
                int profit = prices[r]-prices[l];
                maxP = max(maxP, profit);
            }
            else {
                l=r;
            }
            r++;
        }
        return maxP;
    }
};

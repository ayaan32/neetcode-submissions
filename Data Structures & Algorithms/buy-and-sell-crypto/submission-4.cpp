class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmax=0;
        int minBuy = prices[0];
        for(int p : prices) {
            pmax = max(pmax, p-minBuy);
            minBuy = min(minBuy, p);
        }
        return pmax;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pmax = 0;
        int m = prices[0];
        for(int i=0; i<prices.size(); i++) {
            if(prices[i] < m) m = prices[i];
            int profit = prices[i]-m;
            pmax = max(profit, pmax);
        }
        return pmax;
    }
};

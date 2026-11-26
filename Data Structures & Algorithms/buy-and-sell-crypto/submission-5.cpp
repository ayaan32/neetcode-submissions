class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int res=0;
        for(int i:prices) {
            int prof = i-buy;
            res = max(res, prof);
            if(i<buy) buy=i;
        }
        return res;
    }
};

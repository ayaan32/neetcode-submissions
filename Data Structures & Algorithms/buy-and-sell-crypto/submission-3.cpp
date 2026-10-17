class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0, buy=prices[0];
        for(int i : prices) {
            int prof = i-buy;
            res = max(res, prof);
            if(i < buy) buy = i;
        }
        return res;
    }
};

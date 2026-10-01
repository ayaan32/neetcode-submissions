class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        int res = 1;
        vector<pair<int, int>> fleet;
        for (int i = 0; i < n; i++) {
            fleet.push_back({position[i], speed[i]});
        }
        sort(fleet.rbegin(), fleet.rend());
        double prev = double(target - fleet[0].first) / fleet[0].second;
        double cur;
        for (int i = 1; i < n; i++) {
            cur = double(target - fleet[i].first) / fleet[i].second;
            if (cur > prev) {
                res++;
                prev = cur;
            }
        }
        return res;
    }
};

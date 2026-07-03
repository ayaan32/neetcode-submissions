class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if(n==0) return 0;
        vector<pair<int,int>> vec;
        for(int i=0; i<n; i++) {
            vec.push_back({position[i], speed[i]});
        }
        sort(vec.rbegin(), vec.rend());
        double prev = (double)(target - vec[0].first)/vec[0].second;
        int fleet = 1;
        for(int i=1; i<n; i++) {
            double cur = (double)(target - vec[i].first)/vec[i].second;
            if(cur>prev) {
                fleet++;
                prev=cur;
            }
        }
        return fleet;
    }
};

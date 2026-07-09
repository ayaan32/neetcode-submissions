class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> m;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) == m.end()) return "";
        auto& val = m[key];
        int n = val.size();
        int l=0, r=n-1;
        string res = "";
        while(l<=r) {
            int k = (l+r)/2;
            if(val[k].first <= timestamp) {
                res = val[k].second;
                l = k+1;
            } else {
                r=k-1;
            }
        }
        return res;
    }
};

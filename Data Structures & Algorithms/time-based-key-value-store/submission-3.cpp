class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> store;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        auto& val = store[key];
        int left=0, right=val.size()-1;
        string res = "";
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(val[mid].first <= timestamp) {
                res = val[mid].second;
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return res;
    }
};

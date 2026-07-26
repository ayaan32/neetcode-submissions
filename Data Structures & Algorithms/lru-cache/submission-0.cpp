class LRUCache {
    vector<pair<int, int>> cache;
    int capacity;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        for(int i=0;i<cache.size(); i++) {
            if(cache[i].first == key) {
                pair<int, int> temp = cache[i];
                cache.erase(cache.begin() + i);
                cache.push_back(temp);
                return temp.second;
            }
        }
        return -1;
    }
    
    void put(int key, int value) {
        pair<int, int> temp = {key, value};
        for(int i=0;i<cache.size(); i++) {
            if(cache[i].first == key) {
                cache.erase(cache.begin() + i);
                cache.push_back(temp);
                return;
            }
        }
        if(cache.size() == capacity) {
            cache.erase(cache.begin());
        }
        cache.push_back({key, value});
    }
};

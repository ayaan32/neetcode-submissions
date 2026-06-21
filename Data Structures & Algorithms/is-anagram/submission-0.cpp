class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> smap, tmap;
        for(auto &i : s) {
            smap[i]++;
        }
        for(auto &i : t) {
            tmap[i]++;
        }
        if(tmap == smap) return true;
        else return false;
    }
};

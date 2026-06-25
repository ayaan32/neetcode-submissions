class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, res=0;
        int n = s.size();
        unordered_set<int> mySet;
        for(int r = 0; r<n; r++) {
            while(mySet.find(s[r]) != mySet.end()) {
                mySet.erase(s[l]);
                l++;
            }
            mySet.insert(s[r]);
            res = max(res, r-l+1);
        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int res=0;
        int l=0, r=0;
        int n = s.size();
        while(r<n) {
            while(seen.count(s[r])) {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            r++;
            res = max(r-l, res);
        }
        return res;
    }
};

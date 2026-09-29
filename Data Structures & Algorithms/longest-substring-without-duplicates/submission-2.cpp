class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int n = s.size();
        int res=0;
        int l=0, r=0;
        while(r<n) {
            while(seen.contains(s[r])) {
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

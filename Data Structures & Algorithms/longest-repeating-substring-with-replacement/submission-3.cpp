class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf=0, l=0, r=0, res=0;
        unordered_map<char, int>mp;
        while(r<s.size()) {
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);
            while(r-l+1 - maxf > k) {
                mp[s[l]]--;
                l++;
            }
            res=max(res, r-l+1);
            r++;
        }
        return res;
    }
};

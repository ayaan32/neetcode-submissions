class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf=0, res=0, l=0;
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
            maxf = max(maxf, mp[s[i]]);
            while(i-l+1-maxf>k) {
                mp[s[l]]--;
                l++;
            }
            res = max(res,i-l+1);
        }
        return res;
    }
};

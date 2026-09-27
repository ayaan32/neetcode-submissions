class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> cs(26,0);
        vector<int> ct(26,0);
        int n = s.size();
        for(int i=0; i<n; i++) {
            cs[s[i] - 'a']++;
            ct[t[i] - 'a']++;
        }
        for(int i=0; i<26; i++) {
            if(cs[i] != ct[i]) return false;
        }
        return true;
    }
};

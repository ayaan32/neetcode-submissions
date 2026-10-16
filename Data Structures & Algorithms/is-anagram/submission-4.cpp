class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> ca(26,0);
        // vector<int> tc(26,0);
        for(int i=0; i<s.size(); i++) {
            ca[s[i] - 'a']++;
            ca[t[i] - 'a']--;
        }
        for(int i : ca) {
            if(i!=0) return false;
        }
        return true;
    }
};

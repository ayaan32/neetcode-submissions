class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sd(26, 0), td(26, 0);
        for(char ch : s) {
            sd[ch-'a']++;
        }
        for(char ch : t) {
            td[ch-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(sd[i]!=td[i]) return false;
        }
        return true;

    }
};

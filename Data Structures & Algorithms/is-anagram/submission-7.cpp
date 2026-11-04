class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl=s.size();
        int tl=t.size();
        if(sl!=tl) return false;
        vector<int> sv(26,0);
        vector<int> tv(26,0);
        for(char ch : s) {
            sv[ch-'a']++;
        }
        for(char ch : t) {
            tv[ch-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(sv[i] != tv[i]) return false;
        }
        return true;
    }
};

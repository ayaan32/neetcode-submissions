class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> cs1(26,0), cs2(26,0);
        for(int i=0; i<s1.size(); i++) {
            cs1[s1[i] - 'a']++;
            cs2[s2[i] - 'a']++;
        }
        int matches = 0;
        for(int i=0; i<26; i++) {
            if(cs1[i] == cs2[i]) matches++;
        }
        int l=0;
        for(int r=s1.size(); r<s2.size(); r++) {
            if(matches == 26) return true;
            int index = s2[r] - 'a';
            cs2[index]++;
            if(cs1[index] == cs2[index]) matches++;
            else if(cs1[index] + 1 == cs2[index]) matches--;
            index = s2[l] - 'a';
            cs2[index]--;
            if(cs1[index] == cs2[index]) matches++;
            else if(cs1[index] - 1 == cs2[index]) matches--;
            l++;
        }
        return matches == 26;
    }
};

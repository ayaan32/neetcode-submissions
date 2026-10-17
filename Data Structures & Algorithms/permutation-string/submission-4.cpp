class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> sc1(26, 0);
        vector<int> sc2(26, 0);
        for(int i=0; i<s1.size(); i++) {
            sc1[s1[i] - 'a']++;
            sc2[s2[i] - 'a']++;
        }
        int matches = 0;
        for(int i=0; i<26; i++) {
            if(sc1[i] == sc2[i]) matches++;
        }
        int l = 0;
        for(int r=s1.size(); r<s2.size(); r++) {
            if(matches == 26) return true;
            int index = s2[r] - 'a';
            sc2[index]++;
            if(sc2[index] == sc1[index]) matches++;
            else if(sc1[index] + 1 == sc2[index]) matches--;

            index = s2[l] - 'a';
            sc2[index]--;
            if(sc2[index] == sc1[index]) matches++;
            else if(sc1[index] - 1 == sc2[index]) matches--;
            l++;
        }
        return matches == 26;
    }
};

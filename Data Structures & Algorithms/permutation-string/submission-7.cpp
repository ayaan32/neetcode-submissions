class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        vector<int> s1v(26, 0), s2v(26,0);
        for(int i=0; i<s1.size(); i++) {
            s1v[s1[i]-'a']++;
            s2v[s2[i]-'a']++;
        }
        int matches=0;
        for(int i=0; i<26; i++) {
            if(s1v[i] == s2v[i]) matches++;
        }
        int l=0;
        for(int r=s1.size(); r<s2.size(); r++) {
            if(matches==26) return true;
            int index = s2[r]-'a';
            s2v[index]++;
            if(s2v[index] == s1v[index]) matches++;
            else if(s1v[index] + 1 == s2v[index]) matches--;
            index = s2[l]-'a';
            s2v[index]--;
            if(s1v[index] == s2v[index]) matches++;
            else if(s1v[index]-1 == s2v[index]) matches--;
            l++;
        }
        return matches == 26;
    }
};

class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        if(t.size() > s.size()) return "";
        unordered_map<char, int> mp, window;
        for(char c : t) {
            mp[c]++;
        }
        int l=0, have=0, need = mp.size(), resL=INT_MAX;
        pair<int, int> res= {-1, -1};
        for(int r=0;r<s.size();r++) {
            char c = s[r];
            window[c]++;
            if(window.count(c) && window[c] == mp[c]) have++;
            while(have == need) {
                if(r-l+1 < resL) {
                    resL = r-l+1;
                    res = {l,r};
                }
                window[s[l]]--;
                if(mp.count(s[l]) && window[s[l]] < mp[s[l]]) have--;
                l++;
            }

        }
        return resL == INT_MAX ? "" : s.substr(res.first, resL); 
    }
};

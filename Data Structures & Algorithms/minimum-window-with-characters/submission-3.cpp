class Solution {
public:
    string minWindow(string s, string t) {
        if(t == "") return "";
        unordered_map<char, int> cnt, window;
        for(char i : t) {
            cnt[i]++;
        }
        int have=0, need=cnt.size();
        int resLen=INT_MAX;
        pair<int, int> res;
        int l=0;
        for(int r=0; r<s.size(); r++) {
            char c = s[r];
            window[c]++;
            if(cnt.count(c) && window[c] == cnt[c]) have++;
                while(have == need) {
                    if((r-l+1) < resLen) {
                        resLen = r-l+1;
                        res = {l,r};
                    }
                    window[s[l]]--;
                    if(cnt.count(s[l]) && window[s[l]] < cnt[s[l]]) have--;
                    l++;
                }
            
        }
        return resLen == INT_MAX ? "" : s.substr(res.first, resLen);

    }
};

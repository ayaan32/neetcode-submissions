class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(int i=0; i<strs.size(); i++) {
            int len = strs[i].size();
            res+= to_string(len) + '#' + strs[i];
        }
        return res;
    }

    //3#cat2#at

    vector<string> decode(string s) {
        vector<string> res;
        for(int i=0; i<s.size(); i++) {
            string len = "";
            while(s[i] != '#') {
                len+=s[i];
                i++;
            }
            int l = stoi(len);
            res.push_back(s.substr(i+1, l));
            i+=l;
        }
        return res;
    }
};

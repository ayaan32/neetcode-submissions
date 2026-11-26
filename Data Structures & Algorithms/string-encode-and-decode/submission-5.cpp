class Solution {
   public:
    string encode(vector<string>& strs) {
        string res="";
        for (string str : strs) {
            int len = str.size();
            // res.append(len.to_string());
            res += to_string(len) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while (i < s.size()) {
            int j=i;
            string len = "";
            while (s[j] != '#') {
                len += s[j];
                j++;
            }
            int l = stoi(len);
            string cur = s.substr(j + 1, l);
            res.push_back(cur);
            i=j+l+1;
        }
        return res;
    }
};

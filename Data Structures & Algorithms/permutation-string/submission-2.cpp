class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(), n2=s2.size();
        sort(s1.begin(), s1.end());
        if(n1>n2) return false;
        int l=0, r=n1-1;
        while(r<n2) {
            string s = s2.substr(l, r-l+1);
            sort(s.begin(), s.end());
            if(s==s1) return true;
            l++;
            r++;
        }
        return false;
    }
};

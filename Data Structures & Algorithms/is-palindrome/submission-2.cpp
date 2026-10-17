class Solution {
public:
    bool isPalindrome(string s) {
        string sc = "";
        for(char c : s) {
            if(isalnum(c)) sc+=tolower(c);
        }
        string rev = sc;
        reverse(rev.begin(), rev.end());
        return rev == sc;
    }

private:
    bool isAl(char c) {
        if(('A' < c && c < 'Z') || ('a' < c && c < 'z') || ('0' < c && c < '9')) {
            return true;
        }
        else return false;
    }
};

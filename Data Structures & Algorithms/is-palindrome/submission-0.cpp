class Solution {
public:
    bool isPalindrome(string s) {
        string c = "";
        for(auto &i : s) {
            if(isalnum(i)) {
                c+=tolower(i);
            }
        }
        return c == string(c.rbegin(), c.rend());
    }
};

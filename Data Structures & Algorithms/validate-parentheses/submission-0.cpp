class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {{']', '['}, {')', '('}, {'}', '{'}};
        stack<char> st;
        for (char c : s) {
            if (mp.find(c) == mp.end()) {
                st.push(c);
            } else if(!st.empty() && st.top() == mp[c]) {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};

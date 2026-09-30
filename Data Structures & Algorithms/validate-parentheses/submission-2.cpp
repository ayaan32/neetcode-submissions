class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {{'}', '{'}, {')', '('}, {']', '['}};
        stack<char> st;
        for (char i : s) {
            if (mp.count(i)) {
                if (!st.empty() && mp[i] == st.top()) {
                    st.pop();
                } else
                    return false;
            } else {
                st.push(i);
            }
        }
        return st.empty();
    }
};

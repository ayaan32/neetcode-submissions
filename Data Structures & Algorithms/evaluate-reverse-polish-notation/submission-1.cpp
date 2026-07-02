class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        while (tokens.size() > 1) {
            for (int i = 0; i < n; i++) {
                if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                    int a = stoi(tokens[i - 2]);
                    int b = stoi(tokens[i - 1]);
                    int res=0;
                    if (tokens[i] == "+") {
                        res = a + b;
                    } else if (tokens[i] == "-") {
                        res = a - b;
                    } else if (tokens[i] == "*") {
                        res = a * b;
                    } else if (tokens[i] == "/") {
                        res = a / b;
                    }
                    tokens.erase(tokens.begin() + i - 2, tokens.begin() + 1 + i);
                    tokens.insert(tokens.begin() + i - 2, to_string(res));
                    break;
                }
            }
        }
        return stoi(tokens[0]);
    }
};

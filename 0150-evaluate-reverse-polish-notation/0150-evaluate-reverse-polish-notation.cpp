class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const string& t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();
                int result;

                if (t == "+") result = b + a;
                else if (t == "-") result = b - a;
                else if (t == "*") result = b * a;
                else if (t == "/") result = b / a;

                s.push(result);
            } else {
                s.push(stoi(t));
            }
        }

        return s.top();
    }

};
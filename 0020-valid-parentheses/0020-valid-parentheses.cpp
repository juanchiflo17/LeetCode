class Solution {
public:
    bool isValid(string s) {
    stack<char> balance;
    for (auto i : s) {
        if ((i == ')' || i == ']' || i == '}') && balance.empty()) return false;
        if (i == '(') {
            balance.push('(');
        }
        else if (i == '[') {
            balance.push('[');
        }
        else if (i == '{') {
            balance.push('{');
        }
        if (i == ')') {
            if (balance.top() != '(') return false;
            else balance.pop();
        }
        else if (i == ']') {
            if (balance.top() != '[') return false;
            else balance.pop();
        }
        else if (i == '}') {
            if (balance.top() != '{') return false;
            else balance.pop();
        }
    }
    if (balance.empty()) return true;
    else return false;
    }
};
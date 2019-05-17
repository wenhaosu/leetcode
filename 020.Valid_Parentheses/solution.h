using namespace std;

class Solution {
public:
    bool isValid(const string &s) {
        stack<char> stk;
        pair<char, char> paren[] = {
                {'(', ')'},
                {'[', ']'},
                {'{', '}'}
        };

        for (auto item : s) {
            for (auto par : paren) {
                if (item == par.first) {
                    stk.push(item);
                    break;
                }
                if (item == par.second) {
                    if (stk.empty() || stk.top() != par.first) {
                        return false;
                    }
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};
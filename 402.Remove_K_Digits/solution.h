using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k >= num.length()) return "0";
        if (k == 0) {
            while (num[0] == '0') num.erase(0, 1);
            return num.empty() ? "0" : num;
        }
        char leading = num[0], next_big = ' ';
        for (int i = 1; i < num.length(); i++) {
            if (next_big == ' ') {
                if (leading <= num[i])
                    next_big = num[i];
                else if (leading > num[i])
                    return removeKdigits(num.erase(i - 1, 1), k - 1);
            } else if (next_big <= num[i]) {
                next_big = num[i];
            } else return removeKdigits(num.erase(i - 1, 1), k - 1);
        }
        return removeKdigits(num.erase(num.length() - 1, 1), k - 1);
    }
};
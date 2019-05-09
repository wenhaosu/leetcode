#include <vector>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        short buf = 0, i = 0;
        while (i < a.length() || i < b.length()) {
            int a_temp = i < a.length() ? a[a.length() - 1 - i] - '0' : 0;
            int b_temp = i < b.length() ? b[b.length() - 1 - i] - '0' : 0;
            int res_temp = buf + a_temp + b_temp;
            result += res_temp % 2 == 1 ? "1" : "0";
            buf = res_temp >= 2 ? 1 : 0;
            i++;
        }
        if (buf == 1) result += "1";
        reverse(result.begin(), result.end());
        return result;
    }
};
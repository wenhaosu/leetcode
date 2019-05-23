using namespace std;

class Solution {
public:
    string removeKdigits(const string& num, int k) {
        string result;
        for (char c : num) {
            while (result.length() && result.back() > c && k) {
                result.pop_back();
                k--;
            }
            if (result.length() || c != '0') result.push_back(c);
        }
        while (result.length() && k--) result.pop_back();
        return result.empty() ? "0" : result;
    }
};
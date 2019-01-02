#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int keyNum = numRows * 2 - 2;
        vector<string> retVec(numRows, "");
        for (int i = 0; i < s.size(); i++) {
            if (i % keyNum < numRows) retVec[i % keyNum] += s[i];
            else retVec[keyNum - i % keyNum] += s[i];
        }
        string ret;
        for (const auto &str : retVec) ret += str;
        return ret;
    }
};
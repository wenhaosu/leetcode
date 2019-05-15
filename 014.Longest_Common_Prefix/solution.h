using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        auto first_str = strs[0];
        for (int index = 0; index < first_str.length(); index++) {
            char item = first_str[index];
            for (auto str: strs) {
                if (str[index] != item) {
                    return first_str.substr(0, static_cast<unsigned long>(index));
                }
            }
        }
        return first_str;
    }
};
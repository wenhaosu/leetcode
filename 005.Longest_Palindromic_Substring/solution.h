using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, max_len = -1;
        for (int i = 0; i < s.size(); i++) {
            int left = i, right = i;
            while (s[left] == s[right + 1]) {
                right++;
                i++;
            }
            while (left - 1 >= 0 && right + 1 < s.size() && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }
            if (right - left + 1 > max_len) {
                max_len = right - left + 1;
                start = left;
            }
        }
        return s.substr(static_cast<unsigned long>(start), static_cast<unsigned long>(max_len));
    }
};
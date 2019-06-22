using namespace std;

class Solution {
public:
    int longestSubstring(const string &s, int k) {
        return helper(s, k, 0, s.size());
    }

private:
    int helper(const string &s, int k, int first, int last) {
        int count[26] = {0};
        for (int i = first; i < last; i++) count[s[i] - 'a']++;

        int max_len = 0;
        for (int i = first; i < last;) {
            while (i < last && count[s[i] - 'a'] < k) i++;
            if (i == last) break;
            int j = i;
            while (j < last && count[s[j] - 'a'] >= k) j++;
            if (i == first && j == last) return j - i;
            max_len = max(max_len, helper(s, k, i, j));
            i = j;
        }
        return max_len;
    }
};
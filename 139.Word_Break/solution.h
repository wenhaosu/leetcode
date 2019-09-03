#include <climits>

using namespace std;

class Solution {
public:
    bool wordBreak(const string &s, vector<string> &wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        unordered_map<int, set<string>> words;
        int minSize = INT_MAX;
        for (const auto &word : wordDict) {
            words[word.size()].insert(word);
            minSize = min(minSize, (int) word.size());
        }

        for (int i = 1; i < dp.size(); i++) {
            if (i < minSize) {
                dp[i] = false;
                continue;
            }
            for (const auto &item : words) {
                if (i - item.first < 0) continue;
                if (item.second.count(s.substr(i - item.first, item.first)) != 0 && dp[i - item.first]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
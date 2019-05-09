#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n + 1);
        dp[0] = {};
        for (int i = 1; i <= n; i++) {
            dp[i] = {};
            if (i == 1) {
                dp[i] = {"()"};
                continue;
            }
            for (const auto &item : dp[i - 1]) {
                dp[i].push_back("(" + item + ")");
            }
            for (int j = 1; j < i; j++) {
                for (const auto &p : dp[j]) {
                    for (const auto &q : dp[i - j]) {
                        string comb = p + q;
                        if (find(dp[i].begin(), dp[i].end(), comb) == dp[i].end())
                            dp[i].push_back(p + q);
                    }
                }
            }
        }
        return dp[n];
    }
};
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int len_s = s.length();
        int len_p = p.length();
        vector<vector<bool>> dp(len_s + 1, vector<bool>(len_p + 1));
        dp[0][0] = true;

        for (int i = 1; i <= len_p; i += 2) {
            if (i + 1 > len_p || p[i] != '*') break;
            dp[0][i + 1] = true;
        }

        for (int i = 1; i <= len_s; i++) {
            for (int j = 1; j <= len_p; j++) {
                if (s[i - 1] == p[j - 1] || p[j - 1] == '.') dp[i][j] = dp[i - 1][j - 1];
                else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2];
                    if (s[i - 1] == p[j - 2] || p[j - 2] == '.') dp[i][j] = dp[i][j] || dp[i - 1][j];
                } else dp[i][j] = false;
            }
        }
        return dp[len_s][len_p];
    }
};
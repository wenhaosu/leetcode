using namespace std;

class Solution {
public:
    int knightDialer(int N) {
        int mod = 1000000000 + 7, result = 0;
        vector<vector<int>> dp(10, vector<int>(2, 0));
        vector<vector<int>> reach = {{4, 6},
                                     {6, 8},
                                     {7, 9},
                                     {4, 8},
                                     {0, 3, 9},
                                     {},
                                     {0, 1, 7},
                                     {2, 6},
                                     {1, 3},
                                     {2, 4}};

        for (int j = 0; j < 10; j++) dp[j][1] = 1;

        for (int i = 2; i <= N; i++) {
            int curr = i % 2;
            for (int j = 0; j < 10; j++) {
                int sum = 0;
                for (auto &prev : reach[j]) sum = (sum + dp[prev][1 - curr]) % mod;
                dp[j][curr] = sum;
            }
        }

        for (auto p : dp) result = (result + p[N % 2]) % mod;
        return result;
    }
};
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {

        /// Straight forward solution

//        int ans = nums[0], i, sum = 0;
//        for (i = 0; i < nums.size(); i++) {
//            sum += nums[i];
//            ans = max(sum, ans);
//            sum = max(sum, 0);
//        }
//        return ans;

        /// DP solution

        vector<int> dp(nums.size());
        dp[0] = nums[0];
        int res = dp[0];
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
            res = max(res, dp[i]);
        }
        return res;
    }
};
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> sol;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] + nums[len - 3] + nums[len - 2] + nums[len - 1] < target) continue;
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            for (int j = i + 1; j < len - 2; j++) {
                int cur = target - nums[j] - nums[i], l = j + 1, r = len - 1;
                while (l < r) {
                    int remain = nums[l] + nums[r] - cur;
                    if (remain == 0) sol.push_back({nums[i], nums[j], nums[l], nums[r]});
                    remain > 0 ? r-- : l++;
                }
            }
        }
        sort(sol.begin(), sol.end());
        sol.erase(unique(sol.begin(), sol.end()), sol.end());
        return sol;
    }
};
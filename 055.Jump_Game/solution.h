using namespace std;

class Solution {
public:
    bool canJump(vector<int> &nums) {

        /// Greedy Solution

//        if (nums.empty()) return false;
//        int curr_pos = 0, reach_pos = 0, max_reach = 0;
//        while (curr_pos <= reach_pos) {
//            while (curr_pos <= reach_pos) {
//                max_reach = max(curr_pos + nums[curr_pos], max_reach);
//                curr_pos++;
//            }
//            reach_pos = max_reach;
//            if (reach_pos >= nums.size() - 1) return true;
//        }
//        return false;

        /// Inplace O(n) solution

        for (int i = 1; i < nums.size(); i++) {
            int remain_step = nums[i - 1] - 1;
            if (remain_step < 0) return false;
            nums[i] = max(nums[i], remain_step);
        }
        return true;
    }
};
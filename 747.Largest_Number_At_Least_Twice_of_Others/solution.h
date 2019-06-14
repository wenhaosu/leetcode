using namespace std;

class Solution {
public:
    int dominantIndex(vector<int> &nums) {
        if (nums.empty()) return -1;
        if (nums.size() == 1) return 0;

        int max_index = nums[0] > nums[1] ? 0 : 1;
        int second_index = 1 - max_index;

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] > nums[max_index]) {
                second_index = max_index;
                max_index = i;
            } else if (nums[i] > nums[second_index]) {
                second_index = i;
            }
        }

        if (nums[max_index] < 2 * nums[second_index]) return -1;
        return max_index;
    }
};
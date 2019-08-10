using namespace std;

class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        if (nums.size() < 2) return;
        auto idx = nums.size() - 2;
        while (idx >= 0 && nums[idx] >= nums[idx + 1]) idx--;
        sort(nums.begin() + idx + 1, nums.end());
        if (idx == -1) return;
        for (auto i = idx + 1; i < nums.size(); i++) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }
    }
};
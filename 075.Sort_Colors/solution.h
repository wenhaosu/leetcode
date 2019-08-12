using namespace std;

class Solution {
public:
    void sortColors(vector<int> &nums) {
        int forward = 0, backward = nums.size() - 1;
        for (int i = 0; i <= backward; i++) {
            if (nums[i] == 0)
                swap(nums[i], nums[forward++]);
            else if (nums[i] == 2)
                swap(nums[i--], nums[backward--]);
        }
    }
};
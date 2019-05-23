using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int result = nums[0], count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                result = nums[i];
                count++;
            } else if (result == nums[i]) {
                count++;
            } else count--;
        }
        return result;
    }
};
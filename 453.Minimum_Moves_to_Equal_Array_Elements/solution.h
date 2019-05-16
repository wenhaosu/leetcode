using namespace std;

class Solution {
public:
    int minMoves(vector<int> &nums) {
        long min = nums[0], moves = 0, sum = 0;
        for (auto item : nums) {
            if (min > item) min = item;
            sum += item;
        }
        return sum - min * nums.size();
    }
};
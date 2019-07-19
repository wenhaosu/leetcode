using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int> &hand, int W) {
        if (hand.size() % W != 0) return false;
        if (W == 1) return true;
        map<int, int> nums;
        for (auto item : hand) nums[item]++;
        for (auto num : nums) {
            if (nums[num.first] > 0)
                for (int i = W - 1; i >= 0; i--)
                    if ((nums[num.first + i] -= nums[num.first]) < 0)
                        return false;
        }
        return true;
    }
};
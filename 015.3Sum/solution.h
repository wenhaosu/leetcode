using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            int target = nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            while (front < back){
                int sum = nums[front] + nums[back];
                if (sum + target > 0) {
                    back--;
                    continue;
                }
                if (sum + target < 0) {
                    front++;
                    continue;
                }

                vector<int> sol = {nums[i], nums[front], nums[back]};
                result.push_back(sol);

                while (front < back && nums[front] == sol[1]) front++;
                while (front < back && nums[back] == sol[2]) back--;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
        return result;
    }
};
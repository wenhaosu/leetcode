using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++){
            int front = i + 1;
            int back = nums.size() - 1;
            while (front < back){
                int temp = nums[i] + nums[front] + nums[back];
                if (abs(temp-target) <= abs(result-target)){
                    result = temp;
                    if (result == target) return result;
                }
                if (temp > target) back--;
                if (temp < target) front++;
            }
        }
        return result;
    }
};
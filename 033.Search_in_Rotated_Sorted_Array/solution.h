using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.empty()) return -1;
        int begin = 0, end = (int) nums.size() - 1;
        while (end >= begin) {
            int mid = (begin + end) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) {
                if (nums[begin] <= target) end = mid;
                else if (nums[begin] < nums[mid]) begin = mid + 1;
                else end = mid;
            } else {
                if (nums[end] >= target) begin = mid + 1;
                else if (nums[end] > nums[mid]) end = mid;
                else begin = mid + 1;
            }
        }
        if (nums[begin] == target) return begin;
        else if (nums[end] == target) return end;
        return -1;
    }
};
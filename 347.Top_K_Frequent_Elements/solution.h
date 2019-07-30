using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> count;
        for (auto num : nums) count[num]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto c : count) buckets[c.second].push_back(c.first);

        vector<int> ans;
        for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; --i) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) break;
            }
        }
        return ans;
    }
};
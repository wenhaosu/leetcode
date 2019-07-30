using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> count;
        for (auto num : nums) count[num]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto c : count) buckets[c.second].push_back(c.first);
        reverse(begin(buckets), end(buckets));

        vector<int> ans;
        for (auto &bucket: buckets)
            for (auto i : bucket) {
                ans.push_back(i);
                if (ans.size() == k) return ans;
            }
        return ans;
    }
};
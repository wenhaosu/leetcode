using namespace std;

class Solution {
public:

    /// Set Solution

//    vector<vector<int>> subsets(vector<int> &nums) {
//        vector<set<set<int>>> num_set(nums.size() + 1);
//        num_set[0].insert({{}});
//        vector<vector<int>> result;
//        for (int i = 1; i < nums.size() + 1; i++) {
//            for (auto num : nums) {
//                for (auto item : num_set[i - 1]) {
//                    set<int> temp = item;
//                    temp.insert(num);
//                    if (temp.size() == i) num_set[i].insert(temp);
//                }
//            }
//        }
//        for (auto item : num_set) {
//            for (auto res : item) {
//                vector<int> temp(res.begin(), res.end());
//                result.push_back(temp);
//            }
//        }
//        return result;
//    }

    /// Backtracking Solution

//    vector<vector<int>> subsets(vector<int> &nums) {
//        vector<vector<int>> subs;
//        vector<int> sub;
//        subsets(nums, 0, sub, subs);
//        return subs;
//    }
//
//private:
//    void subsets(vector<int> &nums, int i, vector<int> &sub, vector<vector<int>> &subs) {
//        subs.push_back(sub);
//        for (int j = i; j < nums.size(); j++) {
//            sub.push_back(nums[j]);
//            subsets(nums, j + 1, sub, subs);
//            sub.pop_back();
//        }
//    }

    /// Iterative Solution

//    vector<vector<int>> subsets(vector<int> &nums) {
//        vector<vector<int>> subs = {{}};
//        for (auto num: nums) {
//            int len = subs.size();
//            for (int i = 0; i < len; i++) {
//                subs.push_back(subs[i]);
//                subs.back().push_back(num);
//            }
//        }
//        return subs;
//    }

    /// Bit Manipulation

    vector<vector<int>> subsets(vector<int> &nums) {
        int n = nums.size(), p = 1 << n;
        vector<vector<int>> subs(p);
        for (int i = 0; i < p; i++)
            for (int j = 0; j < n; j++)
                if ((i >> j) & 1)
                    subs[i].push_back(nums[j]);
        return subs;
    }

};
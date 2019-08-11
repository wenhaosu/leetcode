using namespace std;

class Solution {
public:

    /// DP Solution

//    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
//        sort(candidates.begin(), candidates.end());
//        vector<set<vector<int>>> dp(target + 1);
//        for (auto i : candidates) {
//            if (i > target) break;
//            for (int j = target - i; j > 0; j--) {
//                for (const auto &raw : dp[j]) {
//                    auto item = raw;
//                    item.push_back(i);
//                    dp[j + i].insert(item);
//                }
//            }
//            dp[i].insert({i});
//        }
//        vector<vector<int>> result(dp[target].begin(), dp[target].end());
//        return result;
//    }

    /// Backtracking Solution

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> curr;
        backTracking(0, curr, res, candidates, target);
        return res;
    }

    void backTracking(int order, vector<int> &curr, vector<vector<int>> &res, const vector<int> &candi, int target) {
        if (!target) res.push_back(curr);
        for (; order < candi.size() && candi[order] <= target; order++) {
            curr.push_back(candi[order]);
            backTracking(order + 1, curr, res, candi, target - candi[order]);
            curr.pop_back();
            while (order + 1 != candi.size() && candi[order + 1] == candi[order]) order++;
        }
    }

};
using namespace std;

class Solution {

    /// Normal Backtracking Solution

public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> result;
        bt(result, {}, nums);
        return result;
    }

private:

    void bt(vector<vector<int>> &result, vector<int> temp, vector<int> &nums) {
        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }
        for (int num : nums) {
            if (std::find(temp.begin(), temp.end(), num) != temp.end()) continue;
            temp.push_back(num);
            bt(result, temp, nums);
            temp.pop_back();
        }
    }

    /// Swap Backtracking Solution

//public:
//    vector<vector<int> > permute(vector<int> &num) {
//        vector<vector<int> > result;
//        permuteRecursive(num, 0, result);
//        return result;
//    }
//
//private:
//    void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result) {
//        if (begin >= num.size()) {
//            result.push_back(num);
//            return;
//        }
//        for (int i = begin; i < num.size(); i++) {
//            swap(num[begin], num[i]);
//            permuteRecursive(num, begin + 1, result);
//            swap(num[begin], num[i]);
//        }
//    }

};
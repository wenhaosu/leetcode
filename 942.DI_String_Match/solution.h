#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {

        /// Recursive Solution

//        if (S.length() == 0) return {0};
//        vector<int> prev = diStringMatch(S.substr(1, S.length() - 1));
//        if (S[0] == 'I') {
//            for (auto &item: prev) {
//                item++;
//            }
//            prev.insert(prev.begin(), 0);
//        } else {
//            prev.insert(prev.begin(), S.length());
//        }
//        return prev;

        /// Brute Force Solution

        vector<int> res;
        for (int l = 0, h = S.length(), i = 0; i <= S.length(); i++) {
            res.push_back(S[i] == 'I' ? l++ : h--);
        }
        return res;
    }
};
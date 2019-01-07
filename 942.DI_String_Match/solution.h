#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        if (S.length() == 0) return {0};
        vector<int> prev = diStringMatch(S.substr(1, S.length() - 1));
        if (S[0] == 'I') {
            for (auto &&item: prev) {
                item++;
            }
            prev.insert(prev.begin(), 0);
        } else {
            prev.insert(prev.begin(), S.length());
        }
        return prev;
    }
};
using namespace std;

class Solution {
public:
    int longestArithSeqLength(vector<int> &A) {
        int max_len = 1;
        vector<unordered_map<int, int>> sol(A.size());
        for (int i = 1; i < A.size(); i++) {
            for (int j = 0; j < i; j++) {
                int diff = A[i] - A[j];
                if (sol[j].find(diff) == sol[j].end()) sol[j][diff] = 1;
                sol[i][diff] = sol[j][diff] + 1;
                max_len = max(max_len, sol[i][diff]);
            }
        }
        return max_len;
    }
};
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int> &A, vector<vector<int>> &queries) {
        vector<int> ans;
        int even_sum = 0;
        for (auto a : A) {
            if (a % 2 == 0) even_sum += a;
        }
        for (auto query : queries) {
            if (A[query[1]] % 2 == 0) even_sum -= A[query[1]];
            A[query[1]] += +query[0];
            if (A[query[1]] % 2 == 0) even_sum += A[query[1]];
            ans.push_back(even_sum);
        }
        return ans;
    }
};
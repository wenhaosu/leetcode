using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int> &A) {
        vector<int> result = A;
        int idx = A.size() - 1;
        for (int i = 0, j = A.size() - 1; i <= j;) {
            if (A[i] * A[i] > A[j] * A[j]) {
                result[idx--] = A[i] * A[i];
                i++;
            } else {
                result[idx--] = A[j] * A[j];
                j--;
            }
        }
        return result;
    }
};
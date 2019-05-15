using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> &A) {
        for (auto &n : A)
            while (n > 0 && n <= A.size() && n != A[n - 1])
                swap(n, A[n - 1]);
        for (auto i = 0; i < A.size(); i++)
            if (A[i] != i + 1) return i + 1;
        return A.size() + 1;
    }
};
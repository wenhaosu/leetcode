using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int> &primes) {
        vector<int> index(primes.size(), 0), result(n, 1);
        for (int i = 1; i < n; i++) {
            int curr_min = INT32_MAX, curr_min_idx = 0;
            for (int j = 0; j < index.size(); j++) {
                int temp_ugly = result[index[j]] * primes[j];
                if (temp_ugly < curr_min) {
                    curr_min = temp_ugly;
                    curr_min_idx = j;
                }
            }
            index[curr_min_idx]++;
            if (result[i - 1] != curr_min) result[i] = curr_min;
            else i--;
        }
        return result[n - 1];
    }
};
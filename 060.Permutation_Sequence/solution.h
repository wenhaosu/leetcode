using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        string res;
        vector<char> tokens;
        vector<int> fac = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        for (int i = 0; i < n; i++) tokens.push_back('1' + i);

        for (; n > 0; n--) {
            int div = fac[n - 1], quo = k / div;
            k = k % div == 0 ? div : k % div;
            if (k == div) quo--;
            res += tokens[quo];
            tokens.erase(tokens.begin() + quo);
        }
        return res;
    }
};
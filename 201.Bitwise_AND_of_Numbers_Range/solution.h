using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        return n > m ? rangeBitwiseAnd(m, n & (n - 1)) : n;
    }
};
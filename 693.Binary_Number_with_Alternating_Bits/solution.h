using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {

        /// Loop Solution

//        bool status = n % 2 == 0;
//        while (n) {
//            n >>= 1;
//            if ((n % 2 == 0) == status) return false;
//            status = n % 2 == 0;
//        }
//        return true;

        /// Cancel Bits Solution

        return !((n ^= n / 4) & n - 1);
    }
};
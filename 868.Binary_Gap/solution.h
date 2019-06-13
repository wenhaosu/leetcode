#include<cmath>

using namespace std;

class Solution {
public:
    int binaryGap(int N) {
        int gap = 0, prev = -1;

        while (N) {
            int pos = (int) floor(log(N) / log(2));
            N -= (int) pow(2, pos);
            gap = max(gap, prev == -1 ? 0 : prev - pos);
            prev = pos;
        }

        return gap;
    }
};
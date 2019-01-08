#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int N1 = nums1.size();
        int N2 = nums2.size();

        if (N1 > N2) return findMedianSortedArrays(nums2, nums1);

        int low = 0, high = N1 * 2;

        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = N1 + N2 - cut1;

            double L1 = (cut1 == 0) ? INT_MIN : nums1[(cut1 - 1) / 2];
            double R1 = (cut1 == N1 * 2) ? INT_MAX : nums1[(cut1) / 2];
            double L2 = (cut2 == 0) ? INT_MIN : nums2[(cut2 - 1) / 2];
            double R2 = (cut2 == N2 * 2) ? INT_MAX : nums2[(cut2) / 2];

            if (L1 > R2) high = cut1 - 1;
            else if (L2 > R1) low = cut1 + 1;
            else return (max(L1, L2) + min(R1, R2)) / 2;
        }

        return -1;
    }
};
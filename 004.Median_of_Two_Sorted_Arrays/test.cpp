#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Median of Two Sorted Arrays", "[findMedianSortedArrays]") {
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    REQUIRE(s.findMedianSortedArrays(nums1, nums2) == 2);
    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};
    REQUIRE(s.findMedianSortedArrays(nums3, nums4) == 2.5);
    vector<int> nums5 = {1, 2, 3};
    vector<int> nums6 = {7, 8, 9};
    REQUIRE(s.findMedianSortedArrays(nums5, nums6) == 5);
}

#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("First Missing Positive", "[firstMissingPositive]") {
    Solution s;
    vector<int> nums1 = {1, 2, 0};
    REQUIRE(s.firstMissingPositive(nums1) == 3);
    vector<int> nums2 = {3, 4, -1, 1};
    REQUIRE(s.firstMissingPositive(nums2) == 2);
    vector<int> nums3 = {7, 8, 9, 11, 12};
    REQUIRE(s.firstMissingPositive(nums3) == 1);
}

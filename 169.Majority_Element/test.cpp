#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Majority Element", "[majorityElement]") {
    Solution s;
    vector<int> nums1 = {3, 2, 3};
    REQUIRE(s.majorityElement(nums1) == 3);
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    REQUIRE(s.majorityElement(nums2) == 2);
}

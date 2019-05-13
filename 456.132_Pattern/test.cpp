#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("132 Pattern", "[find132pattern]") {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 4};
    REQUIRE(!s.find132pattern(nums1));
    vector<int> nums2 = {3, 1, 4, 2};
    REQUIRE(s.find132pattern(nums2));
    vector<int> nums3 = {1, 0, 1, -4, -3};
    REQUIRE(!s.find132pattern(nums3));
}

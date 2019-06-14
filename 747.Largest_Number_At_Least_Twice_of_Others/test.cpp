#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Largest Number At Least Twice of Others", "[dominantIndex]") {
    Solution s;
    vector<int> nums1 = {3, 6, 1, 0};
    REQUIRE(s.dominantIndex(nums1) == 1);
    vector<int> nums2 = {1, 2, 3, 4};
    REQUIRE(s.dominantIndex(nums2) == -1);
    vector<int> nums3 = {0, 0, 3, 2};
    REQUIRE(s.dominantIndex(nums3) == -1);
}

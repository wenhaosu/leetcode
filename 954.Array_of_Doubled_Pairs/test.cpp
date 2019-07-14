#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Array of Doubled Pairs", "[canReorderDoubled]") {
    Solution s;
    vector<int> nums1 = {3, 1, 3, 6};
    vector<int> nums2 = {2, 1, 2, 6};
    vector<int> nums3 = {4, -2, 2, -4};
    vector<int> nums4 = {1, 2, 4, 16, 8, 4};
    REQUIRE(!s.canReorderDoubled(nums1));
    REQUIRE(!s.canReorderDoubled(nums2));
    REQUIRE(s.canReorderDoubled(nums3));
    REQUIRE(!s.canReorderDoubled(nums4));
}

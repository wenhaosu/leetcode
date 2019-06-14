#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Jump Game", "[canJump]") {
    Solution s;
    vector<int> nums1 = {2, 3, 1, 1, 4};
    REQUIRE(s.canJump(nums1));
    vector<int> nums2 = {3, 2, 1, 0, 4};
    REQUIRE(!s.canJump(nums2));
}

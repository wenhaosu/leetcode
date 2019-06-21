#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Super Ugly Number", "[nthSuperUglyNumber]") {
    Solution s;
    vector<int> nums = {2, 7, 13, 19};
    REQUIRE(s.nthSuperUglyNumber(12, nums) == 32);
}

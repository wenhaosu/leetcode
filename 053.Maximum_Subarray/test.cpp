#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Maximum Subarray", "[maxSubArray]") {
    Solution s;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    REQUIRE(s.maxSubArray(nums) == 6);
}

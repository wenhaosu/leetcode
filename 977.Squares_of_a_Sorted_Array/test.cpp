#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Squares of a Sorted Array", "[sortedSquares]") {
    Solution s;
    vector<int> nums = {-4, -1, 0, 3, 10}, ans = {0, 1, 9, 16, 100};
    REQUIRE(s.sortedSquares(nums) == ans);
}

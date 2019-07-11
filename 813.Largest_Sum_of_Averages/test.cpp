#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Largest Sum of Averages", "[largestSumOfAverages]") {
    Solution s;
    vector<int> nums = {9, 1, 2, 3, 9};
    REQUIRE(s.largestSumOfAverages(nums, 3) == 20);
}

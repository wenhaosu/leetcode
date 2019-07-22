#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Sort Array By Parity", "[sortArrayByParity]") {
    Solution s;
    vector<int> nums1 = {3, 1, 2, 4};
    vector<int> ans1 = {2, 4, 3, 1};
    REQUIRE(s.sortArrayByParity(nums1) == ans1);
}

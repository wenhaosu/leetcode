#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("3 Sum", "[3Sum]") {
    Solution s;
    vector<int> test = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = {{-1, -1, 2}, {-1, 0, 1}};
    REQUIRE(s.threeSum(test) == ans);
}

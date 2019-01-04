#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Container With Most Water", "[containerWithMostWater]") {
    Solution s;
    vector<int> test = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = {{-1, 0,  1},
                               {-1, -1, 2}};
    REQUIRE(s.threeSum(test) == ans);
}

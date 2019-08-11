#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Combination Sum II", "[combinationSum2]") {
    Solution s;
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> ans = {{1, 1, 6},
                               {1, 2, 5},
                               {1, 7},
                               {2, 6}};
    REQUIRE(s.combinationSum2(nums, 8) == ans);
}

#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Merge Intervals", "[merge]") {
    Solution s;
    vector<vector<int>> nums = {{1,  3},
                                {2,  6},
                                {8,  10},
                                {15, 18}};
    vector<vector<int>> ans = {{1,  6},
                               {8,  10},
                               {15, 18}};
    REQUIRE(s.merge(nums) == ans);
}

#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("4 Sum", "[fourSum]") {
    Solution s;
    vector<int> test = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> ans = {{-2, -1, 1, 2},
                               {-2, 0,  0, 2},
                               {-1, 0,  0, 1}};
    REQUIRE(s.fourSum(test, 0) == ans);
}

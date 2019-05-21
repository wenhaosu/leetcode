#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Unique Paths II", "[uniquePathsWithObstacles]") {
    Solution s;
    vector<vector<int>> map = {
            {0, 0, 0},
            {0, 1, 0},
            {0, 0, 0}
    };
    REQUIRE(s.uniquePathsWithObstacles(map) == 2);
}

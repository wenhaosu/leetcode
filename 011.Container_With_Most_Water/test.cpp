#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Container With Most Water", "[containerWithMostWater]") {
    Solution s;
    vector<int> test = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    REQUIRE(s.maxArea(test) == 49);
}

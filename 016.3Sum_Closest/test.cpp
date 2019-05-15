#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("3 Sum Closest", "[threeSumClosest]") {
    Solution s;
    vector<int> test = {-1, 2, 1, -4};
    REQUIRE(s.threeSumClosest(test, 1) == 2);
}

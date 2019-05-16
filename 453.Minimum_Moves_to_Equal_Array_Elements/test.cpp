#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Minimum Moves to Equal Array Elements", "[minMoves]") {
    Solution s;
    vector<int> nums = {1, 2, 3};
    REQUIRE(s.minMoves(nums) == 3);
}

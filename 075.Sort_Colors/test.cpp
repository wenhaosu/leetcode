#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Sort Colors", "[sortColors]") {
    Solution s;
    vector<int> input = {2, 0, 2, 1, 1, 0};
    vector<int> output = {0, 0, 1, 1, 2, 2};
    s.sortColors(input);
    REQUIRE(input == output);
}

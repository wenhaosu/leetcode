#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Number of Islands", "[numIslands]") {
    Solution s;
    vector<vector<char>> map1 = {{'1', '1', '1', '1', '0'},
                                 {'1', '1', '0', '1', '0'},
                                 {'1', '1', '0', '0', '0'},
                                 {'0', '0', '0', '0', '0'}};
    vector<vector<char>> map2 = {{'1', '1', '0', '0', '0'},
                                 {'1', '1', '0', '0', '0'},
                                 {'0', '0', '1', '0', '0'},
                                 {'0', '0', '0', '1', '1'}};
    REQUIRE(s.numIslands(map1) == 1);
    REQUIRE(s.numIslands(map2) == 3);
}

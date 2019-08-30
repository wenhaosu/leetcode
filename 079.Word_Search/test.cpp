#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Word Search", "[exist]") {
    Solution s;
    vector<vector<char>> input = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};

    REQUIRE(s.exist(input, "ABCCED"));
    REQUIRE(s.exist(input, "SEE"));
    REQUIRE(!s.exist(input, "ABCB"));
}

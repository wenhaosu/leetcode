#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Common Prefix", "[longestCommonPrefix]") {
    Solution s;
    vector<string> test1 = {"flower", "flow", "flight"};
    vector<string> test2 = {"dog", "racecar", "car"};
    REQUIRE(s.longestCommonPrefix(test1) == "fl");
    REQUIRE(s.longestCommonPrefix(test2) == "");
}

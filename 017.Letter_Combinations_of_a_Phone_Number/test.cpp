#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Letter Combinations of a Phone Number", "[letterCombinations]") {
    Solution s;
    vector<string> sol = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    REQUIRE(s.letterCombinations("23") == sol);
}

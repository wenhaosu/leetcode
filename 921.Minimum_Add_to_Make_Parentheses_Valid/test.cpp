#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Minimum Add to Make Parentheses Valid", "[minAddToMakeValid]") {
    Solution s;
    REQUIRE(s.minAddToMakeValid("())") == 1);
    REQUIRE(s.minAddToMakeValid("(((") == 3);
    REQUIRE(s.minAddToMakeValid("()") == 0);
    REQUIRE(s.minAddToMakeValid("()))((") == 4);
}

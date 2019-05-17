#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Valid Parentheses", "[isValid]") {
    Solution s;
    REQUIRE(s.isValid("()"));
    REQUIRE(s.isValid("()[]{}"));
    REQUIRE(!s.isValid("(]"));
}

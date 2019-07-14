#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Score of Parentheses", "[scoreOfParentheses]") {
    Solution s;
    REQUIRE(s.scoreOfParentheses("()") == 1);
    REQUIRE(s.scoreOfParentheses("(())") == 2);
    REQUIRE(s.scoreOfParentheses("()()") == 2);
    REQUIRE(s.scoreOfParentheses("(()(()))") == 6);
}

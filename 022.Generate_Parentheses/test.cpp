#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Generate Parentheses", "[generateParenthesis]") {
    Solution s;
    vector<string> sol = {
            "((()))",
            "(()())",
            "(())()",
            "()(())",
            "()()()"
    };
    REQUIRE(s.generateParenthesis(3) == sol);
}

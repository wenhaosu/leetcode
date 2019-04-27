#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Regular Expression Matching", "[regExprMatch]") {
    Solution s;
    string ts1 = "aa", tp1 = "a";
    string ts2 = "aa", tp2 = "a*";
    string ts3 = "ab", tp3 = ".*";
    string ts4 = "aab", tp4 = "c*a*b";
    string ts5 = "mississippi", tp5 = "mis*is*p*.";
    string ts6 = "aaa", tp6 = "a*a";
    string ts7 = "bbbba", tp7 = ".*a*a";
    string ts8 = "aaaaaaaaaaaaab", tp8 = "a*a*a*a*a*a*a*a*a*a*c";
//    REQUIRE(!s.isMatch(ts1, tp1));
//    REQUIRE(s.isMatch(ts2, tp2));
//    REQUIRE(s.isMatch(ts3, tp3));
//    REQUIRE(s.isMatch(ts4, tp4));
//    REQUIRE(!s.isMatch(ts5, tp5));
//    REQUIRE(s.isMatch(ts6, tp6));
//    REQUIRE(s.isMatch(ts7, tp7));
    REQUIRE(!s.isMatch(ts8, tp8));
}

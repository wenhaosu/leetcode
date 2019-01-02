#define CATCH_CONFIG_MAIN
#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring", "[longestPalindrome]")
{
    Solution s;
    REQUIRE( s.longestPalindrome("babad") == "bab");
    REQUIRE( s.longestPalindrome("cbbd") == "bb");
}

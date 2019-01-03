#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Palindrome Number", "[palindromeNumber]") {
    Solution s;
    REQUIRE(s.isPalindrome(121));
    REQUIRE(!s.isPalindrome(-121));
    REQUIRE(!s.isPalindrome(10));
}

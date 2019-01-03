#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Substring Without Repeating Characters", "[lengthOfLongestSubstring]") {
    Solution s;
    REQUIRE(s.lengthOfLongestSubstring("abcabcbb") == 3);
    REQUIRE(s.lengthOfLongestSubstring("bbbbb") == 1);
    REQUIRE(s.lengthOfLongestSubstring("a") == 1);
    REQUIRE(s.lengthOfLongestSubstring("wut") == 3);
    REQUIRE(s.lengthOfLongestSubstring("cddc") == 2);
}

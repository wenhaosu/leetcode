#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Substring with At Least K Repeating Characters", "[longestSubstring]") {
    Solution s;
    REQUIRE(s.longestSubstring("aaabb", 3) == 3);
    REQUIRE(s.longestSubstring("ababbc", 2) == 5);
}

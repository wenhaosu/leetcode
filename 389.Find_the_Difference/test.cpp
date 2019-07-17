#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Find the Difference", "[findTheDifference]") {
    Solution s;
    REQUIRE(s.findTheDifference("abcd", "abcde") == 'e');
}

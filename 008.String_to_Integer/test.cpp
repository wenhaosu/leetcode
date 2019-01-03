#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("String to Integer", "[stringToInteger]") {
    Solution s;
    REQUIRE(s.myAtoi("42") == 42);
    REQUIRE(s.myAtoi("   -42") == -42);
    REQUIRE(s.myAtoi("4193 with words") == 4193);
    REQUIRE(s.myAtoi("words and 987") == 0);
    REQUIRE(s.myAtoi("-91283472332") == -2147483648);
    REQUIRE(s.myAtoi("") == 0);
}

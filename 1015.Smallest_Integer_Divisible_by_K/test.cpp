#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Smallest Integer Divisible by K", "[smallestRepunitDivByK]") {
    Solution s;
    REQUIRE(s.smallestRepunitDivByK(1) == 1);
    REQUIRE(s.smallestRepunitDivByK(2) == -1);
    REQUIRE(s.smallestRepunitDivByK(3) == 3);
}

#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Binary Number with Alternating Bits", "[hasAlternatingBits]") {
    Solution s;
    REQUIRE(s.hasAlternatingBits(5));
    REQUIRE(!s.hasAlternatingBits(7));
}

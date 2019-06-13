#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Binary Gap", "[binaryGap]") {
    Solution s;
    REQUIRE(s.binaryGap(22) == 2);
    REQUIRE(s.binaryGap(6) == 1);
    REQUIRE(s.binaryGap(8) == 0);
}

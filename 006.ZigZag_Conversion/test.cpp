#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("ZigZag Conversion", "[zigZagConversion]") {
    Solution s;
    REQUIRE(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    REQUIRE(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
}

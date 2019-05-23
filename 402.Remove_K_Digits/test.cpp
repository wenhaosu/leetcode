#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Remove K Digits", "[removeKdigits]") {
    Solution s;
    REQUIRE(s.removeKdigits("1432219", 3) == "1219");
    REQUIRE(s.removeKdigits("10200", 1) == "200");
    REQUIRE(s.removeKdigits("10", 2) == "0");
    REQUIRE(s.removeKdigits("112", 1) == "11");
}

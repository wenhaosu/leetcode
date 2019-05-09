#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Add Binary", "[addBinary]") {
    Solution s;
    REQUIRE(s.addBinary("11", "1") == "100");
    REQUIRE(s.addBinary("1010", "1011") == "10101");
}

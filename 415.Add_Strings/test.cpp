#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Add Strings", "[addStrings]") {
    Solution s;
    REQUIRE(s.addStrings("11", "1") == "12");
    REQUIRE(s.addStrings("1010", "123") == "1133");
}

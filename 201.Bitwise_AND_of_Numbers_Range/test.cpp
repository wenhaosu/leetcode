#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Bitwise AND of Numbers Range", "[rangeBitwiseAnd]") {
    Solution s;
    REQUIRE(s.rangeBitwiseAnd(5, 7) == 4);
    REQUIRE(s.rangeBitwiseAnd(0, 1) == 0);
}

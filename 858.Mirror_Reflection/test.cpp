#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Mirror Reflection", "[mirrorReflection]") {
    Solution s;
    REQUIRE(s.mirrorReflection(2, 1) == 2);
}

#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Knight Dialer", "[knightDialer]") {
    Solution s;
    REQUIRE(s.knightDialer(1) == 10);
    REQUIRE(s.knightDialer(2) == 20);
    REQUIRE(s.knightDialer(3) == 46);
}

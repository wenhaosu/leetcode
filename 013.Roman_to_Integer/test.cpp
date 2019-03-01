#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Roman to Integer", "[romanToInt]") {
    Solution s;
    REQUIRE(s.romanToInt("III") == 3);
    REQUIRE(s.romanToInt("IV") == 4);
    REQUIRE(s.romanToInt("IX") == 9);
    REQUIRE(s.romanToInt("LVIII") == 58);
    REQUIRE(s.romanToInt("MCMXCIV") == 1994);
}

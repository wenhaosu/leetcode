#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Permutation Sequence", "[getPermutation]") {
    Solution s;
    REQUIRE(s.getPermutation(3, 2) == "132");
    REQUIRE(s.getPermutation(3, 3) == "213");
    REQUIRE(s.getPermutation(4, 9) == "2314");
    REQUIRE(s.getPermutation(5, 8) == "13254");
}

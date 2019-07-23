#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Ones and Zeroes", "[findMaxForm]") {
    Solution s;
    vector<string> array = {"10", "0001", "111001", "1", "0"};
    REQUIRE(s.findMaxForm(array, 5, 3) == 4);
}

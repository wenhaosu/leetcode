#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Add to Array-Form of Integer", "[addToArrayForm]") {
    Solution s;
    vector<int> num1 = {1, 2, 0, 0}, num2 = {1, 2, 3, 4};
    REQUIRE(s.addToArrayForm(num1, 34) == num2);
    vector<int> num3 = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9}, num4 = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    REQUIRE(s.addToArrayForm(num3, 1) == num4);
}

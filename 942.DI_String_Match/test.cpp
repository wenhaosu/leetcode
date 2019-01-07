#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("DI String Match", "[diStringMatch]") {
    Solution s;
    vector<int> ans_1 = {0, 4, 1, 3, 2};
    REQUIRE(s.diStringMatch("IDID") == ans_1);
    vector<int> ans_2 = {0, 1, 2, 3};
    REQUIRE(s.diStringMatch("III") == ans_2);
    vector<int> ans_3 = {3, 2, 0, 1};
    REQUIRE(s.diStringMatch("DDI") == ans_3);
}

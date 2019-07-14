#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Boats to Save People", "[numRescueBoats]") {
    Solution s;
    vector<int> people1 = {1, 2};
    REQUIRE(s.numRescueBoats(people1, 3) == 1);
    vector<int> people2 = {3, 2, 2, 1};
    REQUIRE(s.numRescueBoats(people2, 3) == 3);
    vector<int> people3 = {1, 5, 3, 5};
    REQUIRE(s.numRescueBoats(people3, 7) == 3);
    vector<int> people4 = {3, 2, 3, 2, 2};
    REQUIRE(s.numRescueBoats(people4, 6) == 3);
    vector<int> people5 = {1, 8, 4, 9, 7, 1, 5, 9, 3, 4};
    REQUIRE(s.numRescueBoats(people5, 10) == 6);
}

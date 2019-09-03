#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Minimum Cost For Tickets", "[mincostTickets]") {
    Solution s;
    vector<int> days = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31};
    vector<int> costs = {7, 2, 15};
    REQUIRE(s.mincostTickets(days, costs) == 6);
}
